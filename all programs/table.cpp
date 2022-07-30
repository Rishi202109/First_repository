#include <iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"enter the number for its table"<<endl;
	cin>>n;
	while(i<11)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		++i;
	}
}
