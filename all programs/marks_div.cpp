#include <iostream>
using namespace std;
int main()
{
	float m1,m2,m3,m4,m5,tot,avg;
	cout<<"enter the marks"<<endl;
	cin>>m1>>m2>>m3>>m4>>m5;
	tot=m1+m2+m3+m4+m5;
	avg=tot/500*100;
	
	if(avg>=60)
	{
		cout<<"first division";
	}
	if(avg>=50&&avg<60)
	{
	cout<<"second division";	
	}
	if(avg>=40 && avg<50)
	{
		cout<<"third division";
	}
	if(avg<40)
	{
		cout<<"failed";
	}
	
}
