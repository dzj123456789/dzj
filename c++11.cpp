#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
using namespace std;

int main()
{
	vector<int> a={1,2,3,4};
	list<int> b={5,6,7,8};
	set<int> c={12,33,4,12,2};
	for(int i=0;i<a.size();i++)
		cout<<a[i];
	cout<<endl;
	for(auto i=b.begin();i!=b.end();i++)
		cout<<*i;
	cout<<endl;
	for(auto i:c)
		cout<<i<<'\t';
	return 0;
 } 
