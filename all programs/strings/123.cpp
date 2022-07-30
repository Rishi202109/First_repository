#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char name[100],k=0,j=0;
	cout<<"enter the string"<<endl;
	cin>>name;
	for(int l=0;l<strlen(name);l++);
	{
		if (name[l]=='a'||name[l]=='e'||name[l]=='i'||name[l]=='o'||name[l]=='u')
		{
		k++;
	}
		else
		{
		j++;}
	}
	cout<<"number of consonants are"<<j<<endl;
	cout<<"number of vowels are "<<k<<endl;
	
	
}
