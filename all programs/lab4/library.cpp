#include <iostream>
using namespace std;
int main()
{
	char n;
	cout<<"enter the number of days you are late"<<endl;
	cin>>n;
	if(n>=1&&n<=5)
	cout<<"50 paise fine";
	if(n>=6&&n<=10)
	cout<<"5 rupees fine";
	if(n>10&&n<=30)
	cout<<"fine";
	if(n>30)
	cout<<"your membership is cancelled";
		
}
