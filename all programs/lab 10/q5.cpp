#include <iostream>
using namespace std;
struct mt
{
	float amt;
	float t;
};
struct date
{
	int d;
	int m;
	int y;
};
int main()
{
	date today;
	date dob;
	mt p1;
	cout<<"enter the amount and tenure "<<endl;
	cin>>p1.amt>>p1.t;
	cout<<"enter the date of today"<<endl;
	cin>>today.d>>today.m>>today.y;
	cout<<"enter your date of birth"<<endl;
	cin>>dob.d>>dob.m>>dob.y;
	if(today.y-dob.y>60)
	{
		cout<<"your interest is 9%"<<endl;
		cout<<"your amount will be returned after "<<p1.t<<" years as "<<p1.amt+ p1.amt*0.09*p1.t;
		
	}
	if(today.y-dob.y==60)
	{
		if ((today.m-dob.m>0)||((today.m-dob.m==0)&&(today.d-dob.d>=0)))
		{
		cout<<"your interest is 9%"<<endl;
		cout<<"your amount will be returned after "<<p1.t<<" years as "<<p1.amt+ p1.amt*0.09*p1.t;
		}
		else
	{
			cout<<"your interest is 8%"<<endl;
		cout<<"your amount will be returned after "<<p1.t<<" years as "<<p1.amt+ p1.amt*0.08*p1.t;
    }
	}
	if (today.y-dob.y<60)
	{
		cout<<"your interest is 8%"<<endl;
		cout<<"your amount will be returned after "<<p1.t<<" years as "<<p1.amt+ p1.amt*0.08*p1.t;
	}
	
}
