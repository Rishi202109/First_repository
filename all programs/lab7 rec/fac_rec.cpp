#include <iostream>
using namespace std;
int fac(int m)
{
  if(m==1)
  return 1;
  return m*fac(m-1);
}
int main()
{
	int n;
	cout<<"enter the number for its factorial "<<endl;
	cin>>n;
	
	cout<<"factorial of "<<n<<" is "<<fac(n);
}
