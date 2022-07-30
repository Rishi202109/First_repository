#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,m,n,k;
	cout<<"for ax^2 + bx + c choose the values of a,b,c for their roots"<<endl;
	cin>>a>>b>>c;
	k=(b*b-4*a*c);
	if (k>=0)
	{
	m=((-1*b)+sqrt(k))/(2*a);
	n=((-1*b)-sqrt(k))/(2*a);
	cout<<"roots are "<<m<<" and "<<n;
    }
    if (k<0)
    {
   	cout<<"roots are complex";
	}
}

