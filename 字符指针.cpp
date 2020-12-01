#include<iostream>
using namespace std;

void ch(char *a)   //指针*a
{
	cout << a+1<<endl;   //地址偏移1个字节   ellow
	cout << a[2] << endl; //当指针指向字符串时可以用中括号  l
	cout << *(a) << endl;  //解析a地址的字符    h
	//cout << a[7]<< endl;   //没有赋值但是有地址也可以访问 为空
	*(a+6) = 'd';            //a[6] vc赋值程序出错  dvc a[6]无值 
	printf("%c", a[6]);
}
int main()
{
	char *a="hellow";
	ch(a);
	return 0;
 } 
