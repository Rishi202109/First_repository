#include <iostream>
using namespace std;
int main()
{
	float T,P,C;
	cout<<"enter the selling price of the 15 items as a whole = ";
	cin>>T;
	cout<<"\nenter the total profit recieved on 15 items as a whole = ";
	cin>>P;
	C=(T-P)/15;
	cout<<"the cost of each item = "<<C;
	return 0;
	
}
