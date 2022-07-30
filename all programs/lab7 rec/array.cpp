#include <iostream>
using namespace std;
int fun(int ar[], int m)
{
	if(m==0)
	return ar[m];
		cout<< ar[m];
		return fun( ar,m-1);
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int n=6;
	
	fun(a,n);
	
}
