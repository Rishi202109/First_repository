#include <iostream>
using namespace std;
int main()
{
	float selling_price,cost_price,dis,m,k;
	cout<<"enter the selling price,cost price ,discount "<<endl;
	cin>>selling_price>>cost_price>>dis;
	m=selling_price*((100-dis)/100);
	k=(m-cost_price)/100;
	if(k<0)
	cout<<"the shopkeeper suffered loss of "<<-1*k<<"%";
	if(k=0)
	cout<<"the shopkeeper had no loss and no profit";
	if(k>0)
	cout<<"the shopkeeper had profit of "<<k<<"%";
}
