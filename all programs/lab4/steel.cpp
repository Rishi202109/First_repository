#include <iostream>
using namespace std;
int main()
{
	float h,c,t;
	cout<<"enter hardness, carbon content, tensile strength"<<endl;
	cin>>h>>c>>t;
	if(h>50&&c<0.7&&t>5600)
	cout<<"grade 10";
	if(h>50&&c<0.7&&t<5600)
	cout<<"grade 9";
	if(h<50&&c<0.7&&t>5600)
	cout<<"grade 8";
	if(h>50&&c>0.7&&t>5600)
	cout<<"grade 7";
	if(h>50&&c>0.7&&t<5600 ||h<50&&c<0.7&&t<5600||h<50&&c>0.7&&t>5600)
	cout<<"grade 6";
	if(h<50&&c>0.7&&t<5600)
	cout<<"grade 5";
}
