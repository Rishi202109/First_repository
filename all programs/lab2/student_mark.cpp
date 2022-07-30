#include <iostream>
using namespace std;
int main()
{
	float S1,S2,S3,S4,S5,T,P;
	cout<<"enter the marks of each subject for hundred ";
	cin>>S1>>S2>>S3>>S4>>S5;
	T= S1+S2+S3+S4+S5;
	P=T/5;
	cout<<"\nthe total marks = "<<T;
	cout<<"\nthe percentage achieved = "<<P<<"%";	
	return 0;
}
