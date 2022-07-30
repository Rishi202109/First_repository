#include <iostream>
using namespace std;
int main()
{
	int arr[9],k,i;
	cout<<"enter number"<<endl;
	cin>>k;
	arr[0]=6;
	arr[1]=7;
	arr[2]=8;
	arr[3]=9;
	arr[4]=10;
	arr[5]=11;
	arr[6]=12;
	arr[7]=13;
	arr[8]=14;
	for( i=0;i<9;i=i+1)
	{
		if(arr[i]==k)
		break;
	}
	cout<<"arr[ "<<i<<"]="<<arr[i];
}
