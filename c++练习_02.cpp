#include<iostream>
using namespace std;

class Box{
	private: 
		static int count;    //静态成员变量声明，不允许在类中定义？无论多少对象只有一个副本 
		float width;         //因为静态变量是属于这个类的，不能再某个对象中定义 
		float height=10;
	protected:               //受保护的在子类中可以被访问 
		char *str1="I love you"; 
	public:
		friend void getwid(Box box);         //友元函数 
		static void stafun();                //静态成员函数只能访问静态变量 
		void setwid(float wid);
		inline void count_add();   
		//可以再函数前加inline修饰成为内联函数，内联函数是c++为了提高运行效率 
		int getheight(){
			cout<<"this size:"<<sizeof(this)<<endl; //在类定义中的定义的函数都是内联函数
			return this->height;     //this是指向此类对象的指针占8个字节 
		}
};

class myBox:public Box       //继承 :+方式+类名 多个用,隔开  
{
	public:
		void show(){
			cout<<"The secret is:"<<str1<<endl;
		} 
}; 

void Box::stafun(){
	cout<<"I am static fun:"<<Box::count<<endl;
} 

int Box::count=1;  //静态变量定义 

void Box::count_add(){
	cout<<"the count is:"<<++this->count<<endl;
}

void Box::setwid(float wid){ 
	width=wid;
} 


void getwid(Box box1){       //友元函数不是类成员，不用作用域 
	cout<<"width is:"<<box1.width<<endl; //友元函数不是成员函数没有this指针 
}

int main(){
	Box box1,box2;
	myBox mybox1;
	box1.setwid(12.3);
	getwid(box1);
	cout<<"get height by this:"<<box1.getheight()<<endl;
	box1.count_add();
	box2.count_add();
	box1.stafun();     //使用对象调用静态函数
	Box::stafun();     //使用类名调用静态函数 
	mybox1.show();     //继承类可以访问受保护的变量 
	return 0;
}
