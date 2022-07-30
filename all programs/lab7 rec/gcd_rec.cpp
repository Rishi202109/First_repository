#include <iostream>
using namespace std;
int k=0;
int gcd(int m,int k,int g)
{
  if(m%g==0 && k%g==0)
  return g;
  gcd(m,k,g-1);
}
int main()
{
	int n,l,a,b;
	cout<<"enter the numbers for their gcd "<<endl;
	cin>>n>>l;
	if(n>l)
	{
		a=n;
		b=l;
	}
	else 
	{
		a=l;
		b=n;
		
	}
	cout<<"the gcd is "<<gcd(a,b,b);
}
