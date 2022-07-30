#include <iostream>
using namespace std;
int sqr(int k);
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"square of "<<n<<" is "<<sqr(n);
}
int sqr(int k)
{
	int c;
	c=k*k;
	return c;
}
