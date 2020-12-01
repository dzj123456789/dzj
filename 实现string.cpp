#include<iostream>
using namespace std;

//strcpy(a1,a2)    将a2复制到a1
void mystrcpy(char *s1,char *s2);    //*注意s1必须要有足够的内存储存s2的内容 
//strcat(a1,a2)    将a2连接到a1后面
void mystrcat(char *s1,char *s2);
//strlen(a1)       计算a1字符长度
int mystrlen(char *s1);
//strcmp(a1,a2)    如果a1=a2返回0，a1<a2返回小于0,a1>a2返回大于0 阿斯克码值
int mystrcmp(char *s1,char *s2); 
//strchr(a1,a2)    返回一个指针a2出现在a1的位置 a2为单个字符 
char *mystrchr(char *s1,char s2);


int main()
{
	char s1[20]="you",s2[20]="are",s3[]="quit";
	//mystrcpy(s2,s1);  
	//mystrcat(s1,s3);
	//int a=mystrlen(s1);
	//int a=mystrcmp(s1,"you");
	char *a=mystrchr("hellow_word",'o'); 
	printf("%s\n",a);
	return 0;
}

//strcpy(a1,a2)    将a2复制到a1
void mystrcpy(char *s1,char *s2)    //*注意s1必须要有足够的内存储存s2的内容 
{
	while(*s1++=*s2++);        //printf("%d\t%d\n",'\0',0);    //0和'\0'相等
 } 
 
//strcat(a1,a2)    将a2连接到a1后面
void mystrcat(char *s1,char *s2)
{
	char *temp=s1; 
	while(*s1++);
	--s1;
	while(*s1++=*s2++);
	*s1='\0';
	s1=temp;
	} 

//strlen(a1)       计算a1字符长度
int mystrlen(char *s1){
	int a=0;
	char *p=s1;
	while(*p++) a++;
	return a;
}

//strcmp(a1,a2)    如果a1=a2返回0，a1<a2返回小于0,a1>a2返回大于0 阿斯克码值
int mystrcmp(char *s1,char *s2){
	char *t1=s1,*t2=s2;
	int temp1=0,temp2=0;
	while(*t1++) temp1+=int(*t1);
	while(*t2++) temp2+=int(*t2);
	if(temp1==temp2) return 0;
	else if(temp1<temp2) return -1;
	else return 1;
} 
//strchr(a1,a2)    返回一个指针a2出现在a1的位置 a2为单个字符 
char *mystrchr(char *s1,char s2){
	char *p;
	while(*s1)
	{
		p=s1++;
		if(s2==*s1)
		return p+1;
	} 
	return NULL;
}






















