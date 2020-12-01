#include<iostream>
using namespace std;
void fun1(int arr[])
{
	arr[1]=12;
	arr[2]=13;
	arr[3]=14;
}

void fun(int arr[])
{
	arr[4]=11;
	fun1(arr);
}
int main()
{
	int arr[12]={0};
	fun(arr);
	for(int i=0;i<12;i++)
	{
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
}

