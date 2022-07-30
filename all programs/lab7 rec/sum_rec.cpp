#include <iostream>
using namespace std;
int num(int n)
{
	int sum=0;
	if(n>1)
	{
		return sum=n+num(n-1);;
	}
	else
	return n;
}

int main()
{
	int m;
	cout<<"enter the number of numbers for their sum "<<endl;
	cin>>m;
	cout<<"sum of first "<<m<<" numbers is "<<num(m);
}
