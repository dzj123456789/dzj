#include<iostream>
#include<thread>
using namespace std;

void cat(const int &i){
	cout<<i<<endl;
}
int main()
{
	for(int i=0;i<6;i++)
	{
		thread th(cat,i);
	}
	return 0;
 } 
