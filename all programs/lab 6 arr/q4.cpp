#include <iostream>
using namespace std;
int main()
{
	int i,size;
	cout<<"input the size of the array "<<endl;
	cin>>size;
	int arr[size],arrr[size];
	for(i=0;i<size;i++)
	{
		cout<<"enter the element "<<i<<" :";
		cin>>arr[i];
		arrr[i]=arr[i];
		cout<<"\n";
		
	}
	cout<<"elements stored in 1st array ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n the elements stored in 2nd array ";
	for(i=0;i<size;i++)
	{
		cout<<arrr[i]<<" ";
	}
	
	
}
