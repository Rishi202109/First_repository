#include <iostream>
using namespace std;
void dec(int n)
{
	if(n==0)
	return ;	
	cout<<n<<endl;
    dec(n-1);
}
void inc(int n)
{
	if(n==1)
	{
		cout<<"1"<<endl;
		return;
	}
	inc(n-1);
	cout<<n<<endl;
}

int main()
{
 int i;
 cout<<"enter the value "<<endl;
 cin>>i;
 dec(i);
 inc(i);
}
