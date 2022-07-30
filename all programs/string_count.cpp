#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	char c[100];
	cout<<"enter the char array"<<endl;
    cin>>c;
	char check;
	cout<<"enter the string "<<endl;
	cin>>check;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==check)
		count++;
	}
	cout<<"the frequency of "<<check<<" is "<<count;
}
