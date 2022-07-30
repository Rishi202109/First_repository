#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n],ar[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number for array1 "<<i<<endl;
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		
		cout<<"enter the number for array2 "<<j<<endl;
		cin>>ar[j];
	}
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" "<<ar[k]<<" ";
	}
}
