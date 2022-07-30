#include <iostream>
using namespace std;
int main()
{
	int a=7,b=9;
	int *$=&a;
	cout<<a<<endl;
	cout<<$<<endl;
	cout<<&a<<endl;
	cout<<*$<<endl;
	cout<<&*$<<endl;
	$=&b;
	cout<<&b<<endl;
	cout<<$<<endl;
	cout<<*$<<endl;
	cout<<sizeof(int);
}
