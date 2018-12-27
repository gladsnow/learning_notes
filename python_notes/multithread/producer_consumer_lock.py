# -*- coding: UTF-8 -*-

# 单生成者单消费者问题

import threading, time, random
from time import sleep

product_num = 0
MAX_MUM = 20
class Producer(threading.Thread):
    def __init__(self, name, lock):
        threading.Thread.__init__(self, name=name)
        self.lock = lock

    def run(self):
        global product_num
        while True:
            if self.lock.acquire():
                if product_num > MAX_MUM :
                    print ('The pool of products is full.')
                else:
                    product_num = product_num + 1
                    print ('%s is producing a product to the queue! Now product numbers:%d' % (self.getName()\
                                                                                                   ,product_num))
            self.lock.release()
            time.sleep(random.randrange(3))
        print ('%s finished!' % (self.getName()))


class Consumer(threading.Thread):
    """docstring for Consumer"""
    def __init__(self, name, lock):
        threading.Thread.__init__(self, name=name)
        self.lock = lock

    def run(self):
        global product_num
        while True:
            if self.lock.acquire():
                if product_num <= 0:
                    print ('The pool of products is empty.')
                else:
                    product_num = product_num - 1
                    print ('%s is consuming a product from a queue! Now product numbers:%d' % (self.getName()\
                                                                                                   ,product_num))
            self.lock.release()
            time.sleep(random.randrange(3))
        print ('%s finished!' % (self.getName()))


def main():
    lock = threading.Lock()
    producer = Producer('Producer',lock)
    consumer = Consumer('Consumer',lock)

    producer.start()
    consumer.start()

    producer.join()
    consumer.join()

    print ('All threads finished!')

if __name__ == '__main__':
    main()