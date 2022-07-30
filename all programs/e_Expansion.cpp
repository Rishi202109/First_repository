#include <iostream>
using namespace std;
int main()
{
	float x,n,i,k=1,sum=1;
	cout<<"enter n and value for x"<<endl;
	cin>>n>>x;
	for(i=1;i<=n-1;i=i+1)
	{
	   k=k*x/i;
	   sum=sum+k;
	}
	cout<<sum;
}
