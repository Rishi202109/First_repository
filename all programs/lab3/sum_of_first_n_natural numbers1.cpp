#include <iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"enter a number upto which u need the sum of natural numbers ";
	cin>>n;
    sum=(n*(n+1))/2;
	cout<<"sum of first "<<n<<" natural numbers is "<<sum;
	
	return 0;
}
