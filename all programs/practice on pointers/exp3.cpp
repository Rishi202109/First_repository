#include <iostream>
using namespace std;
int main()
{
	int a=1,*p,**c;
	p=&a;
	c=&p;
	cout<<a<<endl;
	cout<<p<<endl;
	cout<<c<<endl;
}
