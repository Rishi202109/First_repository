#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the number "<<endl;
cin>>n;
int k=n;
cout<<n<<" ";
do
{
	if(n==1)
	{
		cout<<n;
		break;
	}
	if(n%2==0)
	{
		k=k/2;
		cout<<k<<" ";
	}
	if(n%2==1)
	{
		k=3*k+1;
		cout<<k<<" ";
	}
	n=k;
}while (n>1);
}
