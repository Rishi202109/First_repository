#include <iostream>
using namespace std;
int main()
{
	int A,H,F,T;
	cout<<"enter the amount = ";
	cin>>A;
	H=A/100;
	F=(A%100)/50;
	T=((A%100)%50)/10;
	cout<<" the number of hundred rupee notes = "<<H;
	cout<<"\n the number of fifty rupee notes = "<<F;
	cout<<"\n the number of ten rupee notes = "<<T;
	return 0;
	
}
