#include <iostream>
using namespace std;
int main()
{
	unsigned char a=5,b=7;
	cout<<"a=5 , b=7"<<endl;
	int c=a & b;
	cout<<"a & b is "<<c<<endl;
	c=a | b;
	cout<<"a | b is "<<c<<endl;
	 c=a ^ b;
	cout<<"a ^ b is "<<c<<endl;
	 c=~a;
	cout<<"~a is "<<c<<endl;
	 c=a<<2;
	cout<<"a<<2 is "<<c<<endl;
	 c=a>>2;
	cout<<"a>>2 is "<<c<<endl;
	 c=a + b;
	cout<<"a + b is "<<c<<endl;
}
