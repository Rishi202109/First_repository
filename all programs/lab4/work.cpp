#include <iostream>
using namespace std;
int main()
{
	float a;
	cout<<"enter the number of hours (in decimals )you have taken to complete your work "<<endl;
	cin>>a;
	if(a>=2&&a<=3)
	{
		cout<<"you are efficient";
	}
	if(a>3&&a<=4)
	{
		cout<<"you need to improve on your own and be efficient";
	}
	if(a>4&&a<=5)
	{
		cout<<"you have to join the training to be efficient";
	}
	if(a>5)
	{
		cout<<"please quit the job because you are not efficient";
	}
}
