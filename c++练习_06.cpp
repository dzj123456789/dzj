#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
//	ofstream outfile;
//	outfile.open("mydata.txt",ios::app);
//	cout<<"input you concent:"<<endl;
//	char name[100];
//	cin>>name;
//	outfile<<name;
//	outfile.close();

//	ifstream infile;
//	char data[100],data1[100];
//	infile.open("01.cpp",ios::in);
//	infile>>data;      //只能读取一行 
//	infile>>data1;
//	cout<<data<<'\n'<<data1<<endl;
//	infile.close();

//	ifstream infile;
//	infile.open("01.cpp",ios::in);
//	char ch;
//	while

//	string str1;
//	string str2="ni ",str3="hao!";
//	//str2.swap(str3);          //交换字符串 
//	str3.erase();               //查除字符串 
//	str1=str2+str3;             //字符相加 
//	cout<<str1<<'\t'<<str1.length()<<endl;     //find 找到字符出现的位置 
//	printf("%x\n",str1.find('h')); 
//	str1.insert(2,"ye");
//	cout<<str1<<endl;

//	string str,str1;
//	cout<<"file name:"<<endl;
//	cin>>str;
	string str1;
	ofstream ofile;
	ofile.open("11.txt",ios::out|ios::trunc);
	cout<<"file concent:"<<endl;
	cin>>str1;
	ofile<<str1;
	ofile.close();	
	return 0;
}














