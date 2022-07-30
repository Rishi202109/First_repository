#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[]="happy birthday";
	char str2[100];
	strncpy(str2,str1,5);
	cout<<str1<<endl<<"the copied part of array is:"<<endl;
	cout<<str2;
}
