#include <iostream>
using namespace std;


int power(int a,int b);
int main()
{
	int a,b,j;
	
	cout<<"enter a,b respectively"<<endl;
	cin>>a>>b;
	j=power(a,b);
	cout<<a<<" power "<<b<<" is "<<j;
		
}
int power (int a, int b)
{
	int pro=1,i;
	for(i=0;i<=b-1;i=i+1)
	{
		pro=pro*a;
	}
	return pro;
}
