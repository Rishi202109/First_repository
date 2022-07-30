#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x,y,r,k,t;
	cout<<"enter the x and y co-ordinates respectively"<<endl;
	cin>>x>>y;
	k=y/x;
	k=-1*k;
	r= sqrt(x*x+y*y);
	t=atan(k);
	if (x>0&&y<0)
	t=-1*t;
	if (x<0&&y<0)
	t=-1*(3.14-t);
	if (x<0&&y>0)
	t=3.14-t;
	cout<<"polar form of ("<<x<<","<<y<<") is ("<<r<<","<<t<<")";
	
}
