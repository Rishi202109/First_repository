#include <iostream>
using namespace std;
int main()
{
	int *p,a=5;
	int **p1=&(p);
	p=&a;
	cout<<p<<endl;
	cout<<a<<endl;
	cout<<*p<<endl;
	cout<<&a<<endl;
	cout<<p1<<endl;
   cout<<**p1<<endl;
   cout<<&p<<endl;
}
