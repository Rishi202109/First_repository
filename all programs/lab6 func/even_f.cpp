#include <iostream>
using namespace std;
int eo(int a);
int main()
{
	int x;
	cout<<"enter a number"<<endl;
	cin>>x;
	eo(x);
	
	
}
int eo(int a)
{
	 cout<<"the number "<<a<<" is ";
	 if(a%2==0)
	 cout<<"even";
	 else
	 cout<<"odd";
	 
}

