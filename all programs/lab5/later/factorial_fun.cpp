#include <iostream>
using namespace std;
int factor(int f,int k,int m);

int main()
{
	int n,j,l,o;
	cout<<"enter the number for its factorial"<<endl;
	cin>>n>>l>>o;
	j=factor(n,l,o);
	cout<<"factorial of "<<n<<" is "<<j;
	
	
	
}

int factor(int f,int k,int m)
{
	int pro=1,i;
	for(i=1;i<=f;i=i+1)
	{
		pro=f*k*m;
	}
	return pro;
}
