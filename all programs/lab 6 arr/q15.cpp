#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number "<<i<<endl;
		cin>>arr[i];
		
	}
	int m,k;
	cout<<"enter the position you want to replaceand the replaced value"<<endl;
	cin>>m>>k;
	arr[m]=k;
	for(int i=0;i<n;i++)
	{
		
		cout<<arr[i]<<" ";
		
	}
}
