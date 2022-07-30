#include <iostream>
using namespace std;
int main()
{

	int a[2][2];
	int h;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		
		cout<<"enter the element "<<i<<" "<<j<<endl;
		cin>>a[i][j];
	    }
    }
    for( int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<2;i++)
	{
		h=0;
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
			h=h+a[i][j];
			
		}
		cout<<"= "<<h<<endl;
	}
		for(int j=0;j<2;j++)
	{
		h=0;
		for(int i=0;i<2;i++)
		{
			h=h+a[i][j];
			
		}
		cout<<h<<" ";
	}

	
}
