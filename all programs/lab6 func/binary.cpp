#include <iostream>
#include <cmath>
using namespace std;
float bin(int k);
int main()

{
	long long n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"the binary form is "<<bin(n);

	
}
float bin(int k)
{
	 int r,q=k,g=1,j,l=1;
	float e=0;
	while (q>0)
	{
		r=q%2;
		q=q/2;
		e=e/10+r;
		g++;
	}
	e=e*pow(10,g-2);
	
	return e;
	
}
