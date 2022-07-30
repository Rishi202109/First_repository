#include <iostream>
using namespace std;
int num(int n)
{
if(n==1)
{
	cout<<n<<" ";
	return n;
}
 num(n-1);
 cout<<n<<" ";
	
}
int main()
{
	int m;
	cout<<"enter the number of numbers "<<endl;
	cin>>m;
	num(m);

}
