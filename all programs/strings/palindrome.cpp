#include <iostream>
using namespace std;
int main()
{
	char word[100],k=-1,pal[100],t=1;
	cout<<"enter the word "<<endl;
	cin>>word;
	cout<<"the entered word is"<<endl;
	for(int i=0;word[i]!='\0' ;i++)
	{
		cout<<word[i];
		k=k+1;
	}
	cout<<endl;
	cout<<"the reverse of the string is ";
	cout<<endl;
	for(int i=k;i>=0;i=i-1)
	{
		pal[k-i]=word[i];
		cout<<pal[k-i];
	}
	cout<<endl;
	for(int i=0;i<k;i=i+1)
	{
		if(pal[i]!=word[i])
		{
			t=0;
			break;
		}
	}
	if (t==0)
	cout<<"not a palindrome";
	else
	cout<<"its a palindrome";

}
