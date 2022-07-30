#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[20]={1,2,3,4,5,6};
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	system("CLS");
	cout<<arr[n]<<endl;
	int* x=&arr[n];
	cout<<x+1<<endl;
	cout<<*x;
	
}
