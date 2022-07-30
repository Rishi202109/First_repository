#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,n,f,g,h,j;
	cout<<"enter a 5 digit number";
	cin>>n;
	a=n/10000;
	f=n-a*10000;
	b=f/1000;
	g=f-b*1000;
	c=g/100;
	h=g-c*100;
	d=h/10;
	j=n%10;
	cout<<"reverse of "<<n<<" is "<<j<<d<<c<<b<<a; 
	
	return 0;
}
