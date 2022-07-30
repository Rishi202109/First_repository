#include <iostream>
using namespace std;
int main()
{
	int n,h;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number "<<i<<endl;
		cin>>arr[i];
		
	}
	for(int j=0;j<n;j++)
	{
	int l=1;
		for(int k=j+1;k<n;k++)
		{
			if(arr[k]==arr[j])
			l++;
			
			
		}
		cout<<"frequency of "<<arr[j]<<" is "<<l<<endl;
	}
	
}
