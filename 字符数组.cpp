#include<iostream>
#include<string.h>
using namespace std;

char* mystrcat(const char *a,const char *b);
int main()
{
//	char a[]="nihao",a1[]="";
//	cout<<strlen(a)<<endl;   //strlen字符串大小
//	strcpy(a1,a);            //将a字符串复制到a1 
//	cout<<a1<<endl;
//	cout<<strcat(a,"word")<<endl; 
//	cout<<a<<endl; 
//	return 0;

	char a[]="qwe",b[]="rty";
	char *c;
	c=mystrcat(a,b);
	cout<<c<<endl;
 } 
 
 
 char* mystrcat(char *a,char *b)
 {
 	char* temp;
	  temp=a;
	  while((b++)!='\0') *temp++=*b++;
	return temp;
 }
