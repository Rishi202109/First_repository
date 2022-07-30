#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout<<"enter the angle in radians for its trigonometric values"<<endl;
	cin>>x;
	cout<<"sin of "<<x<<"is "<<sin(x);
	cout<<"\ncos of "<<x<<"is "<<cos(x);
	cout<<"\ntan of "<<x<<"is "<<tan(x);
	cout<<"\ncosec of "<<x<<"is "<<1/sin(x);
	cout<<"\nsec of "<<x<<"is "<<1/cos(x);
	cout<<"\ncot of "<<x<<"is "<<1/tan(x);
	
}
