#include <iostream>
using namespace std;
int am(int a[], int n);
int main()
{
	int size;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the elements :"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"enter the element "<<i+1<<" :"<<endl;
		cin>>arr[i];
	}
	cout<<"the largest number in the above numbers is "<<am(arr,size);
	
}
int am(int a[] , int n)
{
	int max,i;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
