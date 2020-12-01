#include<iostream>
using namespace std;

class Rec{          //运算符重载 operator
	private:
		int area; 
	public:
		Rec(int a,int b);
		void getarea(){
			cout<<"The area is:"<<this->area<<endl;	
		};
		int operator+(Rec &rec1){             //返回值+operator 
			return this->area+rec1.area;
		}
}; 

Rec::Rec(int a,int b){
	this->area=a*b;
}

int main(){
	Rec rec1(10,5),rec2(5,4);
	rec1.getarea();
	rec2.getarea();
	int a=rec1+rec2;
	cout<<"rec1+rec2=:"<<a<<endl;
	return 0; 
} 
