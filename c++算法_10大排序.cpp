#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#define ArrLength(a) sizeof(a)/sizeof(int)
int arr[]={6,12,4,9,8,11,16,14,10,3,23,19,34,31,21};
static const int size=ArrLength(arr);    //数组大小 
using namespace std;
void print(int arr[],int a=0); //打印数组 
void change(int &a,int &b);  //交换数字
void bub_sort(int arr[]);    //冒泡排序  每次排序一次将最大的值放最右边                                          1
void choose_sort(int arr[]); //选择排序  在未排序的数中找到最大或者最小的数放到已经排好序的前面                  2
void insert_sort(int arr[]); //插入排序  在已经排好序的数中找到合适的位置插入                                    3
void insert2_sort(int arr[]);   //插入排序 
void fast_sort(int arr[],int l,int r);   //快速排序  每次排序将大于基值得数放右边小于左边的数放左边              4
int fast(int arr[],int l,int r);  //快速排序的分区操作  
void shell_sort(int arr[]);  //分组排序,然后使用插入排序，很棒                                                   5
void heap_sort(int arr[]);    //堆排序，先创建最大堆或者最小堆在取出根节点                                       6
void heap(int arr[],int len);   //调整形成最大堆 
void count_sort(int arr[],int max);   //计数排序 将每个数出现的次数放在arr1[i]=count中 (必须提前知道所排序数组的最大值)7
void bucket_sort(int arr[],int min,int max);   //桶排序  进阶版计数排序 把数放到不同桶里(一个桶代表一个区间)      8
void merge_sort(int arr[],int size);    //归并排序 
void base_sort(int arr[]);     //基数排序
int Binary_Search(int arr[],int tage); //二分查找 ,必须是排好序的数,通过比较中间数，确定查找数在左还是右 
int main()
{
	int arr1[10]={0};
	print(arr);
	cout<<endl;
	//bub_sort(arr);
	//choose_sort(arr);
	//insert_sort(arr);
	//insert2_sort(arr);
	//fast_sort(arr,0,9);
	//shell_sort(arr);
	//heap_sort(arr);
	//count_sort(arr,16);    //使用计数排序必须知道数据范围 
	//bucket_sort(arr,3,16);  
	merge_sort(arr,size); 
	//base_sort(arr);
	cout<<endl;
	print(arr,-1);
	cout<<"The tage index is:"<<endl;
	cout<<Binary_Search(arr,31);
	return 0; 
} 

void print(int arr[],int a)
{
	if(a>0)
		cout<<"The "<<a<<"th"<<"After ordering:"<<endl;
	else if(a<0)
		cout<<"After ordering:"<<endl;
	else
		cout<<"Before ordering:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
}

void change(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

void bub_sort(int arr[])  //冒泡排序 
{
	for(int i=0;i<size-1;i++)   
	{
		for(int j=1;j<size-i;j++)
			{
				if(arr[j]<arr[j-1])
					change(arr[j],arr[j-1]);
			}
		print(arr,i);
	}
}

void choose_sort(int arr[])  //选择排序 
{
	int min;  //定义一个数储存最小值下标 
	for(int i=0;i<size-1;i++)  //只剩最后一个数不用排序 
	{
		min=i;    //将第一个数下标假设为最小值 
		for(int j=i+1;j<size;j++)   //设置为i<size-1时，j=i+1,又可减少一次循环 
		{
			if(arr[min]>arr[j])   // 如果出现比最小值的小标还小的数，将这个最值的小标改变成最小值下标 
				min=j;          //应该使用赋值  入过交换会可能会减小j的值，使程序多做无用功 
		 } 
		 change(arr[i],arr[min]);        //将最小值和arr[i]交换 
		 print(arr,i);
	 } 
} 

void insert_sort(int arr[])   //插入排序 
{
	int temp; 
	for(int i=0;i<size-1;i++)  //
	{
		temp=arr[i+1];   //在数组中拿出第i+1个数,准备在前面比较插入 
		for(int j=i+1;j>0;j--)  //从i+1开始向前扫描比较 直到比较到第一个位置 
		{
			if(temp<arr[j-1])
			{
				arr[j]=arr[j-1];   //如果这个值比要插入的值大，那么就向后面移动一位 
				     //当直到第一个元素都比temp大，那么先将元素后移，将temp插入到第一个元素 
					arr[0]=temp;
			 } 
			 else{                //如果前面的数比temp小，那么就不用后了。直接将temp插入到arr[j]的位置 
			 	arr[j]=temp;      
			 	break;            //找到插入的地方，并结束循环 
			 } 
		 }
		 print(arr,i);
	} 
}

void insert2_sort(int arr[])   //另一种方法实现插入排序 
{
	int temp,j;
	for(int i=1;i<size;i++)  //i=1开始，i表示待排序数字 
	{
		j=i-1;
		temp=arr[i];    //将待插入数据保存一下 
		while(arr[j]>temp&&j>=0)
		{
			arr[j+1]=arr[j--];
		}
		arr[j+1]=temp;  //如果arr[j]不大于temp  开始j=i-1,所以这里j=j+1,刚好等于i 
		print(arr,i);
	}
}

void fast_sort(int arr[],int l,int r)  //快速排序 
{
	if(l<r)
	{
		cout<<l<<'\t';
		int in=fast(arr,l,r);
		fast_sort(arr,l,in-1);
		fast_sort(arr,in+1,r);
	}
}

int fast(int arr[],int i,int j)  //分区操作 
{
	int temp=arr[i];
	while(i<j)    //当左边下标不等于右边下标时，还需要进行移动 
	{
		while(i<j&&temp<=arr[j])  //当右边的值大于基准值时，j--。 直到在右边遇到小于基准值的数 
			j--;
		arr[i]=arr[j];           //然后将a[i]储存比基准值小的数 
		while(i<j&&temp>=arr[i])  //然后在左边找小于基准值的数，i++。直到找到比基准值大的数，退出循环 
			i++;
		arr[j]=arr[i];          //然后将 a[j]的值储存为大于基准值的数 
	}
	arr[i]=temp;             //最后当i=j时，退出循环，然后将将基准值放到arr[i]位置
	print(arr,i); 
	return i; 
}

void shell_sort(int arr[])  //希尔排序 
{
	int temp,j;
	for(int k=size/2;k>0;k/=2)  //递增数 
	{
		for(int i=k;i<size;i++)   //有几组，会进行几次排序 a[0],a[5]
		{
			temp=arr[i];
			j=i-k;
			while(j>=0&&arr[j]>temp)
			{
				arr[j+k]=arr[j];
				j-=k;
			}
			arr[j+k]=temp;
		 } 
		 print(arr,k);
	}
}

void heap_sort(int arr[])  //堆排序 
{
	for(int i=size;i>0;i--)
	{
		heap(arr,i);
		print(arr,i);
	}	
} 

void heap(int arr[],int len)   //创建最大堆 
{
	for(int i=len/2-1;i>=0;i--)  //只有非叶子节点才进行交换 
	{
		if(2*i+1<len)         //判断叶子节点的下标是否超出数组大小 
		{
			if(arr[2*i+1]>arr[i])        
			change(arr[2*i+1],arr[i]);
		}
		if(2*i+2<len)
		{
			if(arr[2*i+2]>arr[i])
			change(arr[2*i+2],arr[i]);
		}
	}
	change(arr[len-1],arr[0]);
 } 
 
void count_sort(int arr[],int max)  //计数排序 
{
	//错误使用方法 int []p=new int[12]
	int *arr1=new int[max+1]{0};   
	for(int i=0;i<size;i++)
	{
		arr1[arr[i]]+=1;  //将arr元素值，给arr1当下标表示这个元素有值。有重复的值就加1 
	 } 
	 for(int i=0,j=0;i<max+1;i++)  
	 {
	 	while(arr1[i])   //取出arr1的值，当它大于0时就取出并减少1 
	 	{
	 		arr[j++]=i;
	 		arr1[i]-=1;
		 }
	 }
	delete []arr1; 
}

void bucket_sort(int arr[],int min,int max)  //桶排序 
{
	int k=(max-min)/10+1;
	vector<int> *bucket=new vector<int>[k];  //创建一个动态数组,储存在同一个区间的数 
	for(int i=0;i<size;i++)
	{
		bucket[arr[i]/10].push_back(arr[i]);
	} 
	int index=0;
	 for(int i=0;i<k;i++)
	 {
	 	sort(bucket[i].begin(),bucket[i].end());  //将vector里面的元素分别排序 
	 	for(int j=0;j<bucket[i].size();j++)
	 	{
	 		arr[index++]=bucket[i][j];
		 }
	 }
	 delete []bucket;
}

void base_sort(int arr[])
{
	int cishu=2; //16最大2位
	int a,b;  //个位，十位 
	vector<int> p[10];
	for(int j=0;j<size;j++)
	{
		a=arr[j]%10;  //16%10=6;
		p[a].push_back(arr[j]); 	
	}
	for(int i=0,j=0;j<p[i].size();)
	{
		arr[i++]=p[i][j++];
	}

}

void merge_sort(int arr[],int size)//归并排序
{
	//先拆分成两个数组
	int *p,*q;
	if (size>>1)//判断大小-->看是否能够拆分
	{
		//可以的话 拆分两半
		p=new int[size>>1];
		q=new int[size-(size>>1)];
		for (int i=0,j=0;i<size;++i)
		{
			if (i<size>>1)p[i] =arr[i];//前面的一半赋值给p[i]
			else q[j++]=arr[i];//后面的一半赋值给q[j]
		}
		merge_sort(p,size>>1);//排序p
		merge_sort(q,size-(size>>1));//排序q
		//合并  p q当成有序的数组  然后进行合并
		int i,j,k;
		for(i=0,j=0,k=0;i<size>>1&&j<size-(size>>1);)
		{
			if (p[i]<q[j])//合并有序
			{
				arr[k++]=p[i++];
			}
			else
			{
				arr[k++]=q[j++];
			}
		}
			//剩余元素全部放回去
			if (i>=size>>1)//说明p中的内容放完了
			{
				while(j<size-(size>>1))
				{
					arr[k++]=q[j++];
				}
			}
			else
			{
				while(i<size>>1)
				{
					arr[k++]=p[i++];
				}
			}
		delete[] p;
		delete[] q;
	}
	//如果不可以的话   拆分到底  进行合并
	return;
} 

int Binary_Search(int arr[],int tage)      //二分查找
{
	int left=0,right=size-1,mid=0;
	while(left<=right)
	{
		mid=(right+left)/2; 
		if(arr[mid]==tage)
		{
			return mid;
		}
		else if(arr[mid]>tage)
		{
			right=mid-1;
		}
		else left=mid+1;
	 } 
	return -1;
} 





















 
