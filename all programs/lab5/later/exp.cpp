#include <iostream>
using namespace std;
int main()
{
	float x,n,i,k,sum=0;
	cout<<"enter a value for x"<<endl;
	cin>>x;
	k=x;
	for(i=2;i<=30;i++)
	{
		k=k*-1*x*x/(2*(i-1)*(2*i-1));
		sum=sum+k;
	}
	cout<<x+sum;
}
