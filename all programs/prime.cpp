#include <iostream>
using namespace std;
int main()
{
	int n,i;
	for (n=2;n<98;n=n+1)
	{
		int j=1;
	  for (i=2;i<=n/2;i=i+1)
	  {
	  	if(n%i==0)
	  	{
	  		j=0;
	  		break;
		}
		
		  
	  }
	  if (j==1)
		cout<<n<<endl;
	  	
	}
}

