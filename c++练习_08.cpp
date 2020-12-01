#include<iostream>
#include<cstring>
#include<typeinfo>
#include<fstream>
using namespace std;

class Mystring{
	public:
		Mystring(string str="");                          //构造函数 
		~Mystring();									  //析构函数 
		string getstr();                                  //获取字符 
		Mystring operator+(const Mystring &Mystring1);    //对象+重载 
		Mystring  operator=(const string str2);           //给对象赋值一个字符串 
		friend ostream& operator<<(ostream &os,const Mystring &str1);  //输出重载 
	private:
		string *p=NULL;
}; 

ostream& operator<<(ostream &os,const Mystring &str1){
	return os<<*(str1.p)<<endl;
}

Mystring Mystring::operator=(const string str2){
	*(this->p)=str2;
	return *this;
};

string Mystring::getstr(){
	return *(this->p);
};

Mystring Mystring::operator+(const Mystring &Mystring1){
	Mystring gl;
	*gl.p=*(this->p)+*(Mystring1.p);
	return gl;
};

Mystring::Mystring(string str){
	this->p=new string(str);
};

Mystring::~Mystring(){
	delete this->p; 
	cout<<"be deleted ok"<<endl;
} 

int main()
{
//	int *p=NULL;
//	p=new int;         //动态申请内存 
//	*p=100;
//	cout<<*p<<endl;
//	delete p;
//	Mystring a("ni");
//	Mystring b(" hao!");
//	Mystring c,d;
//	c=a+b;
//	d="aaa";
//	c.getstr();
	Mystring a("I love you");
	Mystring b;
	b="you are beautiful"; 
	cout<<a<<b;
	cout<<a.getstr()<<endl;
	return 0;
}


