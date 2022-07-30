#include <iostream>
using namespace std;
int main()
{
	float DKM,DM,DI,DCM;
	cout<<"enter the distance in km between the places for its conversion ";
	cin>>DKM;
	DM= DKM*1000;
	DI= DM*39.37;
	DCM= DM*100;
	cout<<"\nthe distance in meters= "<<DM;
	cout<<"\nthe distance in inches= "<<DI;
	cout<<"\nthe distance in centimeters= "<<DCM;
	
	return 0;
}
