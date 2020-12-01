#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;

void divition(double a,double b){
	if(!(typeid(a)==typeid(int)))
		throw "A cannot be notint";
	if(!(typeid(b)==typeid(int)))
		throw "B cannot be notint";
	if(!b)
		throw "The divisor cannot be 0!";
	cout<<a/b<<endl;
}
int main()
{
	double s,a,b;
	cout<<"input a,b\n";
	cin>>a>>b;
	try{
		divition(a,b);
	} 
	catch(const char *msg)      //必须使用const？？ 
	{
		cout<<msg<<endl; 
	}
	catch(...){                //...表示匹配任意异常 
		cout<<"have exception"<<endl;
	}
	return 0;
 } 
