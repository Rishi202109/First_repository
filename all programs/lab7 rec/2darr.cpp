#include<iostream>
using namespace std;
int main()
{
	int A[3][2]={12,13,14,15,16,17};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	int b[2][3]=A;
	cout<<b[1][2];
}
