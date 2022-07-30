#include <iostream>
using namespace std;
int main()
{
	int x,y;
	int* p=&x;
	*p=7;
	cout<<x;
}
