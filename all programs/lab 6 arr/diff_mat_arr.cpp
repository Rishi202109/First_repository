#include <iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"enter the number of rows and column"<<endl;
	cin>>r>>c;
	int a1[r][c],a2[r][c];
	for(int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cout<<"enter the element "<<i<<" "<<j<<" in first array"<<endl;
			cin>>a1[i][j];
			cout<<"enter the element "<<i<<" "<<j<<" in second array"<<endl;
			cin>>a2[i][j];
		}
	}
		for(int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
		for(int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cout<<a2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"difference of the matrices is "<<endl;
	for(int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cout<<a1[i][j]-a2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
