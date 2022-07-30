#include <iostream>
using namespace std;
int main()
{
	int i,arr[10];
	cout<<"input the 10 numbers "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"enter the element "<<i<<" :";
		cin>>arr[i];
		cout<<"\n";
		
	}
	cout<<"the given inputs are ; ";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}
