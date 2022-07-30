#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[]="happy birthday ";
	cout<<str1<<" is the given 1st string"<<endl;
	char str2[]="to rahul dravid";
	strncat(str1,str2,8);
	char str3[100];
	strcpy(str3,str1);
	cout<<str2<<" is the given 2nd string"<<endl;
	cout<<str3<<" is the combined string";
}
