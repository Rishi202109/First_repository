#include <iostream>
using namespace std;
int pow(int m, int l)
{
  if(l==0)
  return 1;
  return m*pow(m,l-1);
}
int main()
{
	int n,k;
	cout<<"enter the number and its power "<<endl;
	cin>>n>>k;
	
	cout<<"factorial of "<<n<<" is "<<pow(n,k);
}
