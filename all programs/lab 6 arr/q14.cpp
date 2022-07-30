#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number "<<i<<endl;
		cin>>arr[i];
		
	}
	cout<<"enter the number u want to insert"<<endl;
	cin>>arr[n];
	cout<<"enter the position"<<endl;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(i==k-1)
		{
			cout<<arr[n]<<endl;
		}
		cout<<arr[i]<<endl;
		
	}
}
