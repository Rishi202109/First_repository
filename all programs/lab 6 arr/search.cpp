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
	int m;
	cout<<"enter the number u want to search"<<endl;
	cin>>m;
	int k=0;
	for(int i=0;i<n;i++)
	{

		if(arr[i]==m)
		{
		 k=1;
		cout<<"element "<<m<<" is found in the array at "<<i<<" position"<<endl;
	    }
	    
	}
	if(k==0)
	    cout<<"element not found"<<endl;
}
