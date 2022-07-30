#include<iostream>
using namespace std;
int main()
{
	char n;
	cout<<"enter the character: "<<endl;
	cin>>n;
	if(n>=65&&n<=90)
	cout<<"its  capital letter";
	if(n>=97&&n<=122)
	cout<<"its  small letter";
	if(n>=48&&n<=57)
	cout<<"its a digit";
	if((n>0&&n<=47) || (n>=58&&n<=64) || (n>=91&&n<=96) || (n>=123&&n<=127))
    cout<<"its a special symbol";
   

}

