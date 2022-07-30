#include <iostream>
using namespace std;
int main()
{
	int n,m,k,j;
	cout<<"enter the number of rows for the square matrix"<<endl;
	cin>>n;
	m=n*n;
	int a[m];
	for(int i=0;i<m;i++)
	{
		cout<<"enter the element "<<i+1<<endl;
		cin>>a[i];
	}
	cout<<"the matrix is : "<<endl;
	for(int j=0;j<m;j++)
	{
		cout<<a[j]<<"  ";
		if((j+1)%n==0)
		cout<<endl;
	}
	cout<<endl;
	for(int j=0;j<m;j++)
	{
		for(int h=j+1;h<m;h++)
		{
			if(a[h]<a[j])
			{
				int l=a[j];
				a[j]=a[h];
				a[h]=l;
			}
		}
		
	}
     cout<<endl;
    cout<<"enter the value for k for kth minimum number"<<endl;
    cin>>k;
    cout<<"enter the value for j for jth minimum number "<<endl;
    cin>>j;
    cout<<k<<"th minmimum number in the matrix is "<<a[k-1]<<endl;
    cout<<j<<"th minmimum number in the matrix is "<<a[j-1]<<endl;
    cout<<"sum of their squares is "<<(a[k-1]*a[k-1]  )+(a[j-1]*a[j-1]  );
}
