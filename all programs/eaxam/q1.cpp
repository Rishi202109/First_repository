#include <iostream>
using namespace std;
int main()
{
	int n,i,k,j;
	cout<<"enter the number of families in the village"<<endl;
	cin>>n;
	i=1;
	while (i<=n&&i>0)
	{
		j=n-i+1;
		while (j>0)
		{
		cout<<j<<" ";
		j=j-1;	
		}
		cout<<"\n";
		i=i+1;
}

}
