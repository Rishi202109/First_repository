#include <iostream>
using namespace std;
int main()
{
	int i,size;
	cout<<"input the size of the array "<<endl;
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++)
	{
		cout<<"enter the element "<<i<<" :";
		cin>>arr[i];
		cout<<"\n";
		
	}
	cout<<"the given inputs are ; ";
	for(i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}
