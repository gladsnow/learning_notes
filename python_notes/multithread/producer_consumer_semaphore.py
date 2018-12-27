# -*- coding: UTF-8 -*-

# 单生成者单消费者问题

import threading, time, random

product_num = 0
MAX_MUM = 20
class Producer(threading.Thread):
    def __init__(self, name, semaphore):
        threading.Thread.__init__(self, name=name)
        self.semaphore = semaphore

    def run(self):
        global product_num
        while True:
                self.semaphore.acquire()
                if product_num > MAX_MUM :
                    print ('Producter:The pool of products is full.')
                else:
                    product_num = product_num + 1
                    print ('%s is producing a product to the queue! Now product numbers:%d' % (self.getName()\
                                                                                            ,product_num))

                self.semaphore.release()
                time.sleep(random.randrange(2))
        print ('%s finished!' % (self.getName()))


class Consumer(threading.Thread):

    def __init__(self, name, semaphore):
        threading.Thread.__init__(self, name=name)
        self.semaphore = semaphore

    def run(self):
        global product_num
        while True:
            self.semaphore.acquire()
            if product_num <= 0:
                print ('Consumer:The pool of products is empty.')
            else:
                product_num = product_num - 1
                print ('%s is consuming a product from a queue! Now product numbers:%d' % (self.getName()\
                                                                                          ,product_num))
            self.semaphore.release()
            time.sleep(random.randrange(2))
        print ('%s finished!' % (self.getName()))


def main():
    semaphore = threading.BoundedSemaphore(value=10)
    producer = Producer('Producer',semaphore)
    consumer = Consumer('Consumer',semaphore)

    producer.start()
    consumer.start()

    producer.join()
    consumer.join()

if __name__ == '__main__':
    main()