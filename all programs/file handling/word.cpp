#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char W[100][100];
int k = -1,n;
cout<<"Enter the number of words u want to enter "<<endl;
cin>>n;
cout << "enter "<<n<<" words "<<endl;
for(int i = 0; i < n+1; i++)
{
cin.getline(W[i],100);
k=k+1;
}
cout << "the valid words are "<<endl;
cout << W[0] << endl;
for(int i = 0; i < k; i++)
{
if(W[i][strlen(W[i])-1]==W[i+1][0])
{
	cout << W[i+1] << endl;
}
}
return 0;
}

