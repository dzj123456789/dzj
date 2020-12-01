#include<iostream>
using namespace std;

int main(){

//	char a[]="you_are_good";  //a为一个字符常量 
//	char *a1=a;     //a1指向a字符的首地址int类型8位地址 （只储存一个地址，使用偏移可获取字符串所有字符） 
//	cout<<sizeof(a1)<<'\t'<<sizeof(a)<<'\t'<<sizeof(*a1)<<endl;   //结果8 13 1 
//	*a1=a1[2];      //a1回向后偏移2位指向a[2]的地址 (*a1)使用*解析地址后输出u 
//	*a1=a[12];      //
//	*a1='a'; 
//	cout<<*a1<<endl;

//	int arr[]={1,5,10};   //*p++和 (*p)++区别   *优先级大于++ 
//	int *p=arr;
//	int a,b,c;
//	a=*p++;                      //先执行*p将值赋值给a，p=p+1  p向后偏移一个位置 
//	cout<<a<<'\t'<<*p<<endl;    //结果为1 5  a[0],a[1] 
//	b=(*p)++;                    //先解析*p值为b=a[1] 因为上个操作p向后偏移 *p++;相当于a[1]+=1; 
//	cout<<b<<'\t'<<*p<<endl;    //结果为5 6  a[1],a[1]+=1;
	
//	int a,*p,**p1; //*和& 
//	p=&a;          //使用&后，&a是一个指针，可以赋值给p这个指针
//	p1=&p;         //&p使用后相当于在前面加了一个*   ==**p可以赋值给p1 
//	**p1=10;       //使用*后相当于解析这个地址*p1->p, 
//	cout<<a<<'\t'<<*p<<'\t'<<**p1<<endl;

	
	return 0;
}
