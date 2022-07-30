#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float wcf,t,v;
	cout<<"enter the temperature and velocity of the wind in km/sec"<<endl;
	cin>>t>>v;
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	cout<<"the wind chill factor is "<<wcf;
}
