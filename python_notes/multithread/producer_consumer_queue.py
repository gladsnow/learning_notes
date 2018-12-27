# -*- coding: UTF-8 -*-

#单生成者单消费者问题

import threading, time, random
from queue import Queue

from time import sleep

class Producer(threading.Thread):
    def __init__(self,name,queue):
        threading.Thread.__init__(self,name = name)
        self.data=queue

    def run(self):
        while True:
            print ('%s is producing a product to the queue!' %(self.getName()))
            if self.data.full():
                print ('The queue is full.')
                sleep(1)
                continue
            self.data.put(1)
            time.sleep(random.randrange(3))
        print ('%s finished!' %(self.getName()))


class Consumer(threading.Thread):
    """docstring for Consumer"""
    def __init__(self,name,queue):
        threading.Thread.__init__(self,name = name)
        self.data=queue

    def run(self):
        while True:
            if self.data.empty():
                print ('The queue is empty.')
                sleep(1)
                continue
            val = self.data.get()
            print ('%s is consuming a product from a queue!' %(self.getName()))
            time.sleep(random.randrange(4))
        print ('%s finished!' %(self.getName()))
        

def main():
    queue = Queue(maxsize = 20)
    producer = Producer('Producer',queue)
    consumer = Consumer('Consumer',queue)

    producer.start()
    consumer.start()

    producer.join()
    consumer.join()

    print ('All threads finished!')

if __name__ == '__main__':
    main()