#include <iostream>
using namespace std;
int main()
{
	int y;
	cout<<"enter the year to check whether it is a leap year or not "<<endl;
	cin>>y;
	if(y%4==0 && y%100!=0 || y%400==0)
	cout<<"leap year";
	else
	cout<<"not a leap year";
	
	
	
	
	
}
