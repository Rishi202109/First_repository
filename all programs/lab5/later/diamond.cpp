 #include <iostream>
using namespace std;
int main()
{
	int i,j,k,m,n;

	for(i=1;i<=7;i=i+2)
	{	
		for(j=1;j<=7;j=j+1)
		{
			if(j>7-i)
			cout<<"* ";
			else
		    cout<<" ";
		    
		}
		cout<<"\n";
	}
	for(k=1;k<=5;k=k+2)
	{
		for(m=7;m>=1;m=m-1)
		{
			if(m>6-k)
			cout<<" ";
			else
			cout<<"* ";
		}
		cout<<"\n";
	}
}
