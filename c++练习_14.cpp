#include<iostream>
#include<thread>       //线程头文件
#include<mutex>        //线程互斥头文件 但是使用mutex是不安全的，当一个线程在解锁之前异常退出了，那么其它被阻塞的线程就无法继续下去。
using namespace std;
int a = 10;
mutex m; //互锁对象 m.lock() m.unlock()
void cat(int a){
	while (a--)
	{
		m.lock();
		cout << "I am cat   " <<a<< endl;
		m.unlock();
	}
}
void cat1(int a){
	while (a--)
	{
		m.lock();
		cout << "I am cat1  " << a << endl;
		m.unlock();
	}
}

void cat2(int a){
	while (a--)
	{
		lock_guard<mutex> guard(m);   //可以向lock一样线程互斥，当然离开作用域会自动解锁方便
		cout << "I am cat2  " << a << endl;
	}
}

int main()
{
	thread th(cat,a);
	thread th1(cat1,a);
	thread th2(cat2, a);

	th.join();
	th1.join();      //使用join可以让主线程等待此线程完成后再销毁
	th2.join();

	//th.detach();
	//th1.detach();    //detach是用来和线程对象分离的,这样线程可以独立地执行,不过这样由于没有thread对象指向该线程而失去了对它的控制
	//当对象析构时线程会继续在后台执行,但是当主程序退出时并不能保证线程能执行完。
	//如果没有良好的控制机制或者这种后台线程比较重要,最好不用detach而应该使用join。

	cout << "I am main" << endl;
	return 0;
}