#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the sides of a triangle"<<endl;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&c+a>b)
	{
		if(a==b&&b==c)
		{
			cout<<"eqilateral triangle";
		}
		if(a>b&&b==c || b>a&&a==c || c>b&&b==a)
		{
			cout<<"iscoseles triangle";
		}
		if(a!=b&&b!=c&&c!=a)
		{
			cout<<"scalar triangle";
		}
		if((a*a==b*b+c*c) || (a*a+b*b==c*c) || (b*b==a*a+c*c))
		{
			cout<<" right angle triangle";
		}
	}
	else
	{
		cout<<"triangle is not possible";A
	}
}
