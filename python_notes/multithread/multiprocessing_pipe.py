# -*- coding: UTF-8 -*-

import time, random
from multiprocessing import Process, Pipe, Lock


def proc1(pipe):
    for i in range(1, 10):
        pipe.send(i)
        print ("send {0} to pipe".format(i))
        time.sleep(1)


def proc2(pipe):
    n = 9
    while n > 0:
        result = pipe.recv()
        print ("recv {0} from pipe".format(result))
        n -= 1


def main():
    pipe1_conn,pipe2_conn = Pipe(True)
    lock = Lock()
    process_pipe1 = Process(target=proc1, args=(pipe1_conn,))
    process_pipe2 = Process(target=proc2, args=(pipe2_conn,))
    process_pipe1.start()
    process_pipe2.start()

    process_pipe1.join()
    process_pipe2.join()

    print ('All threads finished!')

if __name__ == '__main__':
    main()