#include<iostream>
using namespace std;
int ser(int b);
int main()
{
	int x,i;
	cout<<"enter the number of terms on the series for its sum"<<endl;
	cin>>x;
	for(i=1;i<=x-1;i++)
	{
		cout<<i<<"/"<<i<<"!"<<" + ";
	}
	cout<<x<<"/"<<x<<"! ="<<ser(x);}

int ser(int b)
{
	int sum=0,pro,i,j,k;
	for(i=1;i<=b;i=i+1)
	{
		
		pro=1;
		for(j=1;j<=i;j=j+1)
		{
			pro=pro*j;
			
		}
		k=pro/i;
		sum=sum+k;
		
	}
	return sum;
	
}

	
			

