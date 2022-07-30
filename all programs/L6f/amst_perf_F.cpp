#include <iostream>
#include <cmath>
using namespace std;
int ams (int a);
int per (int c);
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	ams(n);
	cout<<endl;
	per(n);
	
}
int ams (int a)
{
	int t=0,q=a,p=a,sum=0,b;
	while(a!=0)
	{
		a=a/10;
		t=t+1;
	}
	while(t>0)
	{
		b=p%10;
		sum=sum+pow( b , 3);
		p=p/10;
		t=t-1;
	}
	if(q==sum)
	cout<<"the number "<<q<<" is an amstrong number"<<endl;
	else
	cout<<"the number "<<q<<" is not an amstrong number"<<endl;
	
	
}
int per (int c)
{
	int p=c,k,sum=0,n;
	for(n=1;n<p;n=n+1)
	{
		if (p%n==0)
		sum=sum+n;
		
	}
	if(sum==p)
	cout<<"the number "<<p<<" is a perfect number"<<endl;
	else
	cout<<"the number "<<p<<" is not a perfect number"<<endl;
}
