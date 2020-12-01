#include<iostream>
#include<cstring>

using namespace std;
class A{
	public:
		A(){
			cout<<"I am gzao"<<endl;
		}
		~A(){
			cout<<"I am xgou"<<endl;
		};
}; 
using namespace std;
int main()
{
//	int *p=new int[10];        //使用new申请内存     new char[12] ,new string(str)
//	for(int i=0;i<10;)
//	{
//		p[i]=i++;
//	 } 
//	 for(int i=0;i<10;)
//	 	cout<<p[i++]<<endl;
//	 delete []p;              //delete 释放内存 

//	A *p=new A[3];           //new 对象 
//	delete []p;               //释放对象 

//	int **p;                //new二维数组  3行4列 
//	p=new int *[3];
//	for(int i=0;i<3;i++)
//		p[i]=new int[4]; 
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<4;j++)
//			{
//				p[i][j]=i*j;
//				cout<<p[i][j]<<'\t'; 
//			}
//		cout<<endl;
//	}
//	for(int i=0;i<3;i++)
//		delete [] p[i];
//	delete []p;

	//int (*p)[3]=new int[4];    //3行4列   
	int[] p=new int[3];
	p[0]=1;
	
	delete []p;
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
