#include <iostream>
using namespace std;
int main()
{
	float basic,DA,HR,GS;
	cout<<"enter the basic salary";
	cin>>basic;
	DA=basic*0.4;
	HR=basic*0.2;
	GS=basic+DA+HR;
	cout<<"\nthe GROSS SALARY = "<<GS;
	return 0;
}
