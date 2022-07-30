#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[5]={10,7,8,2,3},i,j,k,t=0;
	for(i=0;i<5;i++)
	{
	 for(j=i+1;j<5;j++)
	 {
	 	for(k=0;k<10;k++)
	 	{
	 		if((a[i]&a[j])==pow(2,k))
	 		t++;
	    }
		 }	
	}
	cout<<"order is "<<t;
	
}
