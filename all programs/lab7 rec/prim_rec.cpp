#include <iostream>
using namespace std;
int k=0;
int fac(int m,int h)
{
	if(m==2)
	return 1;
  if(m%h==0 && h!=1)
  return 1;
  if(h==1)
  return 0;
 return fac(m,h-1);
}
int main()
{
	int n,k;
	cout<<"enter the number "<<endl;
	cin>>n;
	k=n-1;
	
	int j= fac(n,k);
	if(j==1)
	cout<<"it is not a prime number";
	else 
	cout<<"it is prime number";
}
