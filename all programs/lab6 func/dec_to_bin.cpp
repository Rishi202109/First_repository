#include <iostream>
#include <cmath>
using namespace std;
long long bin(long long k);
int main()

{
	long long n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"the binary form is "<<bin(n);

	
}
long long bin(long long k)
{
	 long long  r,g=1;
	long long e=0,l=1;
	
	while (k>=0)
	{
		r=k%2;
		k=k/2;
		e=e+r*l;
		g++;
		l*=10;
		if(k==0)
		break;
	}		
	return e;
	
}
