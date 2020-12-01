#include<stdio.h>

char* mycat(char *a,char*b);

int main(void)
{
	char c[]="he";
	char d[]="llo";
	mycat(c,d);
	printf("%s",c);
	
	return 0;
}
char* mycat(char *a,char*b)
{
	while(a++){
		if(*a=='\0')
		{
			while(	*a++=*b++);
			
			break;
		}
	}
	return a;
}
