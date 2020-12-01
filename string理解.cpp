#include<iostream>
using namespace std;

//strcpy(a1,a2)    将a2复制到a1

void mystrcpy(char *s1,char *s2)
{
	char *p=s2;
	while(*s2!='\0') 
	{
		//cout<<'\t'<<*s1++<<'\t'<<*s2++<<endl; 
		//*s1=*s2;
		
		//cout<<*s1;
		printf("%x\t%c\t%x\t%c\t%x\n",s1,*s1,s2,*s2,p);
		//cout<<s1<<'\t'<<s2<<endl;
		s1++;
		s2++;
		} 
 } 
//strcat(a1,a2)    将a2连接到a1后面
//strlen(a1)       计算a1字符长度
//strcmp(a1,a2)    如果a1=a2返回0，a1<a2返回小于0,a1>a2返回大于0
//strchr(a1,a2)    返回一个指针a2出现在a1的位置   
int main()
{
	char *s1="man",*s2="woman";
	cout<<"s1为:"<<s1<<'\n'<<"s2为:"<<s2<<endl; 
	mystrcpy(s1,s2);
	cout<<"s1为:"<<s1<<'\n'<<"s2为:"<<s2<<endl; 
	return 0;
}
