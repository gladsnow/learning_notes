# -*- coding: UTF-8 -*-

# 单生成者单消费者问题

import time, random
from multiprocessing import Process,Queue

from time import sleep

class Producer():
    def __init__(self ,name ,queue):
        self.name =name
        self.data = queue

    def produce(self):
        while True:
            if self.data.full():
                print ('The produce queue is full.')
                sleep(1)
                continue
            val = random.randrange(1,50)
            self.data.put(val)
            print ('%s is producing a product to the queue! produce num:%d' % (self.name,val))
            time.sleep(random.randrange(3))
        print ('%s finished!' % (self.name))


class Consumer():
    """docstring for Consumer"""

    def __init__(self, name, queue):
        self.name = name
        self.data = queue

    def consume(self):
        while True:
            if self.data.empty():
                print ('The consume queue is empty.')
                sleep(1)
                continue
            val = self.data.get()
            print ('%s is consuming a product from a queue! consume num:%d' % (self.name,val))
            time.sleep(random.randrange(4))
        print ('%s finished!' % (self.name))


def main():
    queue = Queue(10)
    producer = Producer('Producer', queue)
    consumer = Consumer('Consumer', queue)
    p_producer = Process(target=producer.produce, args=())
    p_consumer = Process(target=consumer.consume, args=())
    p_producer.start()
    p_consumer.start()

    p_producer.join()
    p_consumer.join()

    print ('All threads finished!')

if __name__ == '__main__':
    main()