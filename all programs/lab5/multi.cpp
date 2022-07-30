#include <iostream>
using namespace std;
int main()
{
	int m;
	while (1)
	{
	cout<<"enter a number\n1.factorial\n2.prime or not\n3.even or not\n 4.Nth fibonacci number\n5.exit"<<endl;
	cin>>m;
	if(m==1)
	{ 
   int n,i,f=1;    
    cout<<"enter any number: "<<endl;   
    cin>>n;    
    for(i=1;i<=n;i++)
    {    
      f=f*i;    
    }    
  cout<<"factorial of "<<n<<" is: "<<f<<endl;     
	}
	if(m==2)
	{
		   int i,k=1,n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for(i=2;i<=n/2;i=i+1)
    {
        if(n%i==0)
        {
           k=0;
           break;
        }
    }
    if(n==1)
    {
        cout<<"the number is neither prime nor composite "<<endl;

    }
    if(k==0)
    {
        cout<<"the number "<<n<<" is a composite number"<<endl;

    }
    else
    {
        cout<<"the number "<<n<<" is a prime number"<<endl;
    }
	}
	if (m==3)
	{
		int n;
		cout<<"enter the number"<<endl;
		cin>>n;
		if(n%2==0)
		cout<<n<<" is a even number"<<endl;
		else
		cout<<n<<" is a odd number"<<endl;
	}
	if (m==4)
	{
		int n, t1 = 0, t2 = 1,nt = 0,i;
        cout<<"Enter the n value: "<<endl;
        cin>>n;
        if(n == 0 || n == 1) 
        cout<<n; 
        else
        nt = t1+t2;
        for (i=3;i<=n;++i)
        {
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
        }
        cout<<t2<<endl;
	}
	if (m==5)
	break;
		
	}
}
