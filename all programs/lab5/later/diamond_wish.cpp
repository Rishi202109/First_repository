 #include <iostream>
using namespace std;
int main()
{
	int i,j,k,m,n;
	cout<<"enter the number of rows (it should be odd)"<<endl;
	cin>>n;
	for(i=1;i<=n;i=i+2)
	{	
		for(j=1;j<=n;j=j+1)
		{
			if(j>n-i)
			cout<<"* ";
			else
		    cout<<" ";
		    
		}
		cout<<"\n";
	}
	for(k=1;k<=n-2;k=k+2)
	{
		for(m=n;m>=1;m=m-1)
		{
			if(m>n-1-k)
			cout<<" ";
			else
			cout<<"* ";
		}
		cout<<"\n";
	}
}
