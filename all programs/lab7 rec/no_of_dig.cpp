#include <iostream>
using namespace std;
int k=0;
int dig(int m)
{
	if(m==0)
	{
		return 0;
	}
	if(m/10==0)
	{
		return 1;
	}
return	1+dig(m/10);
}
int main()
{
	int n;
	cout<<"enter the number to know the number of digits"<<endl;
	cin>>n;
	cout<<"the number of digits are "<<dig(n);
}
