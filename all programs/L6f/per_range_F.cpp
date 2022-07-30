#include <iostream>
using namespace std;
int per(int l,int m );
int main()
{
	int min,max;
	cout<<"enter the lower limit"<<endl;
	cin>>min;
	cout<<"enter the upper limit"<<endl;
	cin>>max;
	per(min,max);
}
int per	(int l , int u)
{

	
	int n,q;
	for(n=l;n<=u;n=n+1)
	{
		int sum=0;
		for(q=1;q<n;q=q+1)
		{
			if (n%q==0)
			sum=sum+q;
		}
		if(sum==n)
		cout<<n<<" is perfect number "<<endl;
		
	}
	
}

