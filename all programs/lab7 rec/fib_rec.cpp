#include <iostream>
using namespace std;
int fib(int n)
{
	if(n>1)
	{
		return fib(n-1)+fib(n-2);
	}
	return n;
}

int main()
{
	int m;
	cout<<"enter the number of numbers for their sum "<<endl;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cout<<fib(i)<<" ";
	}
}
