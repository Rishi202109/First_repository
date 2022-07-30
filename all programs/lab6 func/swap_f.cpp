#include <iostream>
using namespace std;
int swap(int a ,int b);
int main()
{
	int x,y;
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;
	cout<<"n1= "<<x<<" n2= "<<y<<endl;
	swap(x,y);
	
	
}
int swap(int a , int b)
{
	int x;
	x=a;
	a=b;
	b=x;
	cout<<"n1 ="<<a<<" n2= "<<b;
}
