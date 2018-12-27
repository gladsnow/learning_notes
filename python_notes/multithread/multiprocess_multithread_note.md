# 多进程多线程编程 #
************************
##  1.应用场景： ##
###  (1) CPU密集型操作： ###
	使用多进程操作
### （2）IO密集型操作 ###
	优先使用多线程操作，多进程也可以，但会消耗更多资源

##  2.python多线程的特点  ##
python的多线程并不是真正的多线程，由于python的线程全局解释锁（GIL）存在，一个进程中在任意时刻只能有一个线程在执行。

## 3. python多线程实现 ##
python标准库提供了两个模块thread和threading，thread是低级模块，threading是高级模块，是对thread的封装。thread和threading模块都可以用来创建和管理线程，而thread模块提供了基本的线程和锁支持。
两者区别：
（1）threading更先进，有完善的线程管理支持，此外，在thread模块的一些属性会和threading模块的这些属性冲突。
（2）thread模块有很少的（实际上是一个）同步原语，而threading却有很多。
（3）thread模块没有很好的控制，特别当你的进程退出时，而threading会允许默认，重要的子线程完成后再退出，它可以特别指定daemon类型的线程。

## 4.同步机制 ##
线程同步的四种方式：锁机制，条件变量，信号量，同步队列
**（1）锁(Lock)** 
	有两种状态：locked和unlocked，拥有acquire()和release()两种方法，遵循以下规则：
    
* 如果一个锁的状态是unlocked，调用acquire()方法改变它的状态为locked；
* 如果一个锁的状态是locked，acquire()方法将会阻塞，直到另一个线程调用release()方法释放了锁；
* 如果一个锁的状态是unlocked调用release()会抛出RuntimeError异常；
* 如果一个锁的状态是locked，调用release()方法改变它的状态为unlocked。

** (2)可重入锁（RLock) **
	提供和lock对象相同的方法，其特点：
* 记录锁住自己的线程 t ，这样 t 可以多次调用 acquire() 方法而不会被阻塞，比如 t 可以多次声明自己对某个资源的需求。
* 可重入锁必须由锁住自己的线程释放（rl.release()）
* rlock内部有一个计数器，只有锁住自己的线程 t 调用的 release() 方法和之前调用 acquire() 方法的次数相同时，才会真正解锁一个rlock。

** (3)条件(Condition) **
Condition对象封装在一个Lock或RLock对象之上。一个线程等待特定条件，而另一个线程发出特定条件满足的信号。

** （4）Event事件 **
一个线程发送/传递事件，另外的线程等待事件的触发。

**  (5) Semphore同步 **
是一种带计数的线程同步机制，当调用release时，增加计算，当acquire时，减少计数，当计数为0时，自动阻塞，等待release被调用。
存在两种Semphore，纯粹的Semphore和BoundedSemaphore,其区别：
* Semphore:  在调用release()函数时，不会检查增加的计数是否超过上限（没有上限，会一直上升）


* BoundedSemaphore：在调用release()函数时，会检查增加的计数是否超过上限，计数不会超过给定的初始信号量数值(value参数)

******************************

## 5.python多进程实现 ##
python的多进程实现模块有multiprocessing、concurrent.futures、subprocess 。
multiprocessing—— 允许为多核或多CPU派生进程
concurrent.futures—— 提供一个用于异步执行调用的高级接口
subprocess—— 通过子进程来执行外部指令，并通过input/output/error管道，获取子进程的执行的返回信息。用于在Python中与外部程序交互。

## 6.进程间交互和同步 ##
（1） multiprocessing模块支持两种形式的数据交互：队列和管道，都使用消息传递的方式。这些方式只适用于多个进程都是源于同一个父进程的情况。
（2）同步方式：Lock
（3）进程间共享状态：共享内存和Server process（通过Manager()实现进程间通信）

## 7.进程池的实现 ##






	
