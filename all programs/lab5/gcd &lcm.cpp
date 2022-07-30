#include <iostream>
using namespace std;
int main()
{
	int n,m,j,a,b;
	cout<<"enter 2 numbers for their lcm and gcd"<<endl;
	cin>>n>>m;
	if(m>=n)
	{
		a=m;
		b=n;
	}
	if(n>m)
	{
		a=n;
		b=m;
	}
	for (j=b;j>=1;j=j-1)
	{
		if(a%j==0 && b%j==0)
		break;
		
	}
	cout<<j<<" is the gcd of "<<m<<" and "<<n<<endl;
	for (j=a;j<=a*b;j=j+1)
	{
		if(j%a==0&&j%b==0)
		break;
	}
	cout<<j<<" is lcm of "<<m<<" and "<<n<<endl;
	
}
