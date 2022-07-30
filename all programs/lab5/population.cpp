#include <iostream>
using namespace std;
int main()
{
	int n=9000,i,t;
	for (t=1;;t=t+1)
	{
		n=(n*115)/100;
		if(n>=50000)
		cout<<"it takes "<<t<<" years to surpass 50000 population"<<endl;
		if(n>=50000)
		break;
		
	}
	cout<<n<<" is the population";
}
