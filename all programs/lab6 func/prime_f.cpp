#include <iostream>
using namespace std;
int prime(int a );
int main()
{
	int x;
	cout<<"enter a number"<<endl;
	cin>>x;
	prime(x);
	
 }
 int prime(int a)
 {
 	int c,b;
 	if(a==1)
 	cout<<"the number "<<a<<" is neither prime nor composite";
 	if (a==2)
 	cout<<"number "<<a<<" is prime";
 	for(b=2;b<=a/2+1;b++)
 	{
 		if(a%b==0)
 		{
 			c=1;
 			break;
 			
		 }
		else
		c=2;
		 
	 }
	 if (c==1)
	 {cout<<"the number "<<a<<" is composite";
	 }
	 if (c==2)
	 {
	 	cout<<"the number "<<a<<" is prime";
	 }
  } 
