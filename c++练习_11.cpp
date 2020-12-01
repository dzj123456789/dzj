#include<iostream>
#include<string> 
#include<vector>
#include<cstring>
using namespace std;

template <class T>             //函数模板 
T Max(T const& a,T const& b)    //引用类型能提高程序效率，const可以防止值被改变 
{
	return a>b?a:b;            //T表示类型 
}

template <class T>
class myStack{
	private:
		vector<T> stack;
	public:
		void push(T const& aa){      
			stack.push_back(aa);
		}	
		T pop(){
			return stack.pop_back();
		}
		bool empty()
		{
			return stack.empty();
		}
//		friend ostream& operator<<(ostream &os, const myStack<T> &sta){
//			while(!sta.empty())
//			{
//				os<<sta.pop();
//			}
//			return os;
//		}
}; 

int main()
{
	int a=12,b=11;
	float c=12.3,d=13.22;
	cout<<Max(a,b)<<'\n'<<Max(c,d)<<endl;
	
	myStack<int> st;
	st.push(12);
	st.push(11);
	st.push(15);
	//cout<<st<<endl;
	cout<<st.pop();
	
	 
	return 0;
 } 
