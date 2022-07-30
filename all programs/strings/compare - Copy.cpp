#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[]="my name is rishi";
	char str2[]="the name is rishi";
	int great=strcmp(str1,str2);
	if(great=0)
	cout<<"the string length is same";
	if(great>0)
	cout<<"the first string is longer than second string and we can see that comparision is done with left string in the strcmp() ";
    else
    cout<<"the second string is longer than first string and we can see that comparision is done with left string in the strcmp() ";
}
