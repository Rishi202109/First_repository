#include <iostream>
using namespace std;
int main()
{
	int b,i;
	float a,k;
	cout<<"enter the base and power a,b respectively"<<endl;
	cin>>a>>b;
	k=1;
	for(i=1;i<=b;i=i+1)
	{
		k=k*a;
	}
	cout<<"the number "<<a<<" raised to the power "<<b<<" is "<<k;
}
