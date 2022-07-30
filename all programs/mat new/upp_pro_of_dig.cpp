#include <iostream>
using namespace std;
int main()
{
	int mat[3][3],k=1,q;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"enter element "<<i<<" "<<j<<endl;
			cin>>mat[i][j];
		
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<mat[i][j]<<" ";
			if(i==j)
			k=k*mat[i][j];
		}
		cout<<endl;
	}
	cout<<"the product of diagonal elements is "<<k<<endl;
		for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			if(a<b && mat[a][b]==0)
			q=1;
			if(a<b && mat[a][b]!=0)
			{
				 q=2;
				break;
			}
		}
		if(q==2)
		break;
		
	}
	if(q==2)
	cout<<"the matrix is not an upper triangular matrix"<<endl;
	if(q==1)
	cout<<"the matrix is a upper triangular matrix"<<endl;
}
