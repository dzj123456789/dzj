#include<iostream>
using namespace std;

class A{     //多态 
	public:
		virtual void show(){    //使用虚函数就会调用子类的函数 
			cout<<"I am A show:"<<endl;
		}; 
		~A(){
			cout<<"I am A xgou fun"<<endl;
		}	
};

class B:public A{   //B的内存结构为（A+B增加的部分）所以有同名函数时调用的A的函数 
	public:
		void show(){
			cout<<"I am B show:"<<endl;
		}; 
		
		virtual ~B(){
			cout<<"I am B xgou fun"<<endl;
		} 
};

class C{
	public:
		virtual void say()=0;   //纯虚函数的类，只能作为基类且不能声明对象 
}; 

class D:public C{
	public:
		void say(){            //在派生类中具体实现方法 
			cout<<"I am D say()"<<endl;
		}
}; 

class E:public C{
	public:
		void say(){
			cout<<"I am E say()"<<endl;
		}
};


int main()
{
	//隐形转换  
	//a->show();	
	/*c++编译器在编译的时候，要确定每个对象调用的函数（非虚函数）的地址，这称为早期绑定，
	当我们将B类的对象b的地址赋给pA时，c++编译器进行了类型转换，
	此时c++编译器认为变量pA保存的就是A对象的地址，
	当在main函数中执行pA->show(),调用的当然就是A对象的show函数
	虚表可以继承，如果子类没有重写虚函数，那么子类虚表中仍然会有该函数的地址，
	只不过这个地址指向的是基类的虚函数实现，如果基类有3个虚函数，那么基类的虚表中就有三项(虚函数地址)，
	派生类也会虚表，至少有三项，如果重写了相应的虚函数，
	那么虚表中的地址就会改变，指向自身的虚函数实现，如果派生类有自己的虚函数，那么虚表中就会添加该项。 
	*/
	A *a;
	B b;
	B *c;
	a=&b;
	a->~A();     //基类指针可以指向基类析构函数 ？？？ 
	//a->~B();   //不管B的析构函数是否为虚函数，a指针都调用不了B的析构函数
	//A作为父类时析构函数会自动变成虚函数，为啥将B析构函数定义为虚函数时，基类指针不能访问 
	
	D d;
	E e;
	d.say();
	e.say();
	return 0;
}
