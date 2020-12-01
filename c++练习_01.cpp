#include<iostream>
using namespace std;

struct Stu{
	int age;
	char name[10];
};

class Box{   //盒子 
	private:              //public protectd private   共有 受保护 私有 
		int leng=10;
		int width;
		int height;
		int vome;
	public:
		int jsvome(int a,int b,int c);  //体积
		friend void getleng();
		Box();							//构造函数 
		~Box(); 						//析构函数 
}; 

Box::jsvome(int a,int b,int c){      //类声明了，不定义会出错 
	return a*b*c;
} 

Box::getleng() {
	cout<<"lenis:"<<leng<<endl;
}

Box::Box(void){
	cout<<"I am gzhao"<<endl;
}

Box::~Box(){
	cout<<"I am xgou"<<endl; 
		
}

int main()
{
//	Stu stu1{12,"xdeng"};
//	Stu *stu2=&stu1;
//	//Stu *stu3{21,"xming"};  不能这样赋值 stu3是一个8字节的地址 Stu是16字节的结构体 
//	cout<<stu2->name<<'\t'<<sizeof(stu2)<<'\t'<<sizeof(stu1)<<endl;   

	Box box1;

	int a=box1.jsvome(1,2,5);
	cout<<"jsvome:"<<a<<endl;
	getleng();
	return 0;
}





























