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
		cout<<"enter the number "<<i+1<<endl;
		cin>>a[i];
	}
	cout<<"accending order is"<<endl;
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(a[k]<a[j])
			{
				int l=a[j];
				a[j]=a[k];
				a[k]=l;
			}
		}
		
	}
	cout<<"the greatest number in given is "<<a[0];
}
