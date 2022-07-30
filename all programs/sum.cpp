#include <iostream>
using namespace std;
int main()
{
	int i=2,n,s=0,k;
	cout<<"enter the number "<<endl;
	cin>>n;
	while (i<n/2)
	
    {
        if(n%i==0)
        {
           k=0;
           break;
        }
    }
    if(n==1)
    {
        cout<<"the number is neither prime nor composite ";

    }
    if(k==0)
    {
        cout<<"the number %d is a composite number";

    }
    else
    {
        cout<<"the number %d is a prime number";
    }
    i=i+1;
}

	
}
