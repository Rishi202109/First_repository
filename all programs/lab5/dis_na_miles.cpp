#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float lg1,lg2,lt1,lt2,dis_km,dis_na,dlg,dlt,k;
	cout<<"enter the longitudal co-ordinates of 2 places"<<endl;
	cin>>lg1>>lg2;
	cout<<"enter the latitudal co-ordinates of the same 2 places"<<endl;
	cin>>lt1>>lt2;
	dlg=lg1-lg2;
	dlt=lt1-lt2;
	k= sqrt(dlg*dlg + dlt*dlt);
	dis_km=k*100;
	dis_na=dis_km*0.539957;
	cout<<"distance in km= "<<dis_km<<endl;
	cout<<"distance in miles= "<<dis_na;
	
}
 
