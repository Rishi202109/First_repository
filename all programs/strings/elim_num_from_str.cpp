#include <iostream>
using namespace std;
int main()
{
	char name[100];
	cout<<"enter the string"<<endl;
	cin>>name;
	for(int i=0;name[i]!='\0';i++)
	{
		if ((name[i]>='a'&&name[i]<='z') || (name[i]>='A'&&name[i]<='Z'))
		cout<<name[i];
	}
}
