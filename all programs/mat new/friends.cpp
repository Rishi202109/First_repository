#include<iostream>
using namespace std;
int main()
{
	int n=4;
	bool a[n][n];
	cout<<"ENTER either 0 or 1 for true and false respectively: "<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	int s=0,s1=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0 ; j<n; j++)
		{
			if((a[i][j]==true && a[j][i]==true))
			{
				s=s+1;
			}
		}
		if(a[i][i]==true)
		{
			s1 = s1+1;
		}
	}
	cout<<"No. of pairs of Friends:"<<(s/2) + (s1/2) +1;
	
}
