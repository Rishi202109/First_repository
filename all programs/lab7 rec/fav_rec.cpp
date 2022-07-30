#include <iostream>
using namespace std;
int fac(int m)
{
  if(m==1)
  return 1;
  return m*fac(m);
}
int main()
{
	int n,k;
	cout<<"enter the number and its power "<<endl;
	cin>>n>>k;
	
	cout<<"factorial of "<<n<<" is "<<fac(n);
}
