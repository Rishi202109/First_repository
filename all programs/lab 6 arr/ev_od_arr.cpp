#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"element "<<i+1<<endl;
		cin>>a[i];
	}
	cout<<"even numbers : ";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
	cout<<"odd numbers : ";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		cout<<a[i]<<" ";
	}
}
