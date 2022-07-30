#include <iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	for(n=1;n<501;n++)
	{
		i=n%10;
		j=((n-i)/10)%10;
		k=n/100;
		if (n==i*i*i+j*j*j+k*k*k)
		cout<<n<<endl;
	}
}
