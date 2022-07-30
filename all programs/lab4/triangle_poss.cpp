#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the side lengths of triangle"<<endl;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&c+a>b)
	{
		cout<<"\ntriangle is valid";
	}
	else
	{
		cout<<"\ntriangle is not valid";
	}
}
