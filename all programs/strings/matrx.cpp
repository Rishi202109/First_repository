#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int a[3][3], b[3][3], c[3][3];
	cout<<"enter the elements of matrix a"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cin>>a[i][j];
	}
	 
	}
	cout<<endl;
	cout<<"enter the elements of matrix b"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cin>>b[i][j];
	}}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
	}}
	cout<<"the addition of matrix is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  cout<<c[i][j]<<" ";
	}
	cout<<endl;
	}
	 c[3][3]={0};
	 cout<<"the multiplication of matrices are"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  for(int k=0;k<3;k++)
		  c[i][j]=c[i][j]+a[i][k]*b[k][i];
	}}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  cout<<c[i][j]<<" ";
	}
	cout<<endl;
	}
	cout<<"transpose of matrix a is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  cout<<a[j][i]<<" ";
	}
	 cout<<endl;
	}
	cout<<"the lower triangular form of the matrix a is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  if(i>j)
		  a[i][j]=0;
	}}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<a[i][j];
	}
	 cout<<endl;
	}
	cout<<"the upper triangular form of  matrix b is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  if(i<j)
		  b[i][j]=0;  
	}}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  cout<<b[i][j];
	}
	cout<<endl;
	}
}
