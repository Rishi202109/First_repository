#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[]="happy birthday";
	char str2[100];
	strcpy(str2,str1);
	cout<<str1<<" is the given string "<<endl<<"the copied string is"<<endl;
	cout<<str2;
}
