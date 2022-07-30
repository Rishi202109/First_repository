#include <iostream>
using namespace std;
int main()
{
	int m[4][4]={01,02,03,4,5,6,7,8,9,10,11,12,13,14,15,16};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<m[i][j]<<" ";
			
		}
		cout<<endl;
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j=j+2)
		{
			int k;
			k=m[i][j];
			m[i][j]=m[i][j+1];
			m[i][j+1]=k;
		}
	}
	cout<<endl<<"the adjacent column inter changed matrix is"<<endl;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<m[i][j]<<" ";
			
		}
		cout<<endl;
	}
		int m1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		for(int i=0;i<4;i=i+2)
	{
		for(int j=0;j<4;j=j+1)
		{
			int u;
			u=m1[i][j];
			m1[i][j]=m1[i+1][j];
			m1[i+1][j]=u;
		}
	}
	cout<<endl<<"the row interchanged matrix is"<<endl;
			for(int a=0;a<4;a++)
	{
		for(int b=0;b<4;b++)
		{
			cout<<m1[a][b]<<" ";
			
		}
		cout<<endl;
	}

}
