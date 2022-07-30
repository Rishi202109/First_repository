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
	int sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"the sum of the entries is "<<sum;
}
