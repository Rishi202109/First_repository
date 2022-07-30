#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[]="my name is rishi";
	char str2[]="my name is Siddharth";
	int great=strncmp(str1,str2,1);
	if(great==0)
	cout<<"the string length is same";
	if(great>0)
	cout<<"the first string is longer than second string and we can see that comparision is done with left string in the strcmp() ";
    if(great <0)
    cout<<"the second string is longer than first string and we can see that comparision is done with left string in the strcmp() ";
}
