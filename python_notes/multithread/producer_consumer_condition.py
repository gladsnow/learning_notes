# -*- coding: UTF-8 -*-

# 单生成者单消费者问题

import threading, time, random
from time import sleep

product_num = 0
MAX_MUM = 20
class Producer(threading.Thread):
    def __init__(self, name, condition):
        threading.Thread.__init__(self, name=name)
        self.condition = condition

    def run(self):
        global product_num
        while True:
                self.condition.acquire()
                if product_num > MAX_MUM :
                    print 'Producter:The pool of products is full.'
                else:
                    product_num = product_num + 1
                    print '%s is producing a product to the queue! Now product numbers:%d' % (self.getName()\
                                                                                            ,product_num)
                    self.condition.notify()

                self.condition.release()
                time.sleep(random.randrange(2))
        print '%s finished!' % (self.getName())


class Consumer(threading.Thread):
    """docstring for Consumer"""
    def __init__(self, name, condition):
        threading.Thread.__init__(self, name=name)
        self.condition = condition

    def run(self):
        global product_num
        while True:
            self.condition.acquire()
            if product_num <= 0:
                print 'Consumer:The pool of products is empty.'
                self.condition.wait()
            else:
                product_num = product_num - 1
                print '%s is consuming a product from a queue! Now product numbers:%d' % (self.getName()\
                                                                                          ,product_num)
            self.condition.release()
            time.sleep(random.randrange(2))
        print '%s finished!' % (self.getName())


def main():
    condition = threading.Condition()
    producer = Producer('Producer',condition)
    consumer = Consumer('Consumer',condition)

    producer.start()
    consumer.start()

    producer.join()
    consumer.join()

if __name__ == '__main__':
    main()