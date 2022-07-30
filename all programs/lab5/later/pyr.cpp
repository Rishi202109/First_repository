#include <iostream>
using namespace std;
int main()
{
	int i,j,k,m;
	for(i=1;i<=4;i=i+1)
	{	
		for(j=1;j<=4;j=j+1)
		{
			if(j>4-i)
			cout<<"* ";
			else
		    cout<<" ";
		    
		}
		cout<<"\n";
	}
	for(k=1;k<=3;k=k+1)
	{
		for(m=4;m>=1;m=m-1)
		{
			if(m>4-k)
			cout<<" ";
			else
			cout<<"* ";
		}
		cout<<"\n";
	}
}
