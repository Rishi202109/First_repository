#include <iostream>
using namespace std;
int main()
{
	int n,i,j,m,sum=0,a,b;
	{cout<<"enter the number"<<endl;}
	cin>>n;
	i=n;

	for (m=10;m<=n;m=m*1)
	{
		j=i%m;
		i=(i-j)/10;
		sum=sum+j;
		if (i==0)
		while(sum>9)
		{
		 i=sum;
		 b=0;
		 for (a=10;a<=i;a=a*1)
		 {
		 	j=i%m;
		 	i=(i-j)/10;
		 	b=b+j;
		 	sum=b;
		 	if(i==0)
		 	break;
		 }	
		}
				
	}
	
	if(n<10)
	cout<<n<<" is the sum of digits";
	else
	cout<<sum<<" is the sum of digits";
}
