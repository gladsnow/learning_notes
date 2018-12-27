# -*- coding: UTF-8 -*-

# 单生成者单消费者问题

import threading, time, random
from time import sleep

product_num = 0
MAX_MUM = 20
class Producer(threading.Thread):
    def __init__(self, name, event):
        threading.Thread.__init__(self, name=name)
        self.event = event

    def run(self):
        global product_num
        while True:
                if product_num > MAX_MUM :
                    print ('Producter:The pool of products is full.')
                    continue
                else:
                    product_num = product_num + 1
                    print ('%s is producing a product to the queue! Now product numbers:%d' % (self.getName()\
                                                                                            ,product_num))
                    self.event.set()
                    time.sleep(random.randrange(2))
                    self.event.clear()

        print ('%s finished!' % (self.getName()))


class Consumer(threading.Thread):
    """docstring for Consumer"""
    def __init__(self, name, event):
        threading.Thread.__init__(self, name=name)
        self.event = event

    def run(self):
        global product_num
        while True:
            self.event.wait()
            if product_num <= 0:
                print ('Consumer:The pool of products is empty.')
                continue
            else:
                product_num = product_num - 1
                print ('%s is consuming a product from a queue! Now product numbers:%d' % (self.getName()\
                                                                                          ,product_num))
                time.sleep(random.randrange(2))
        print ('%s finished!' % (self.getName()))


def main():
    ev = threading.Event()
    producer = Producer('Producer',ev)
    consumer = Consumer('Consumer',ev)

    producer.start()
    consumer.start()

    producer.join()
    consumer.join()

if __name__ == '__main__':
    main()