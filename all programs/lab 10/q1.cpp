#include <iostream>
using namespace std;
int main()
{
	int *a= new int[5];
	int b[10];
	for(int i=0;i<5;i++)
	{
		cout<<"enter the "<<i+1<<" element in the dynamic array : ";
		cin>>a[i];
		b[i]=a[i];
	 } 
	 for (int i=5;i<10;i++)
	 {
	 	cout<<"enter the "<<i+1<<" element in the real array : ";
		cin>>b[i];
	 }
	 delete a;
	 for(int i=0;i<10;i++)
	 {
	 	for(int j=i+1;j<10;j++)
	 	{
	 	   if (b[j]<b[i])
			{
			 int temp;
			 temp=b[j];
			 b[j]=b[i];
			 b[i]=temp;	
		    } 	
		}
	 }
	 cout<<"the smallest of the elements is "<<b[0]<<endl;
	 cout<<"the largest of the elements is "<<b[9]<<endl;
	 cout<<"the ascending order is "<<endl;
	 for(int i=0;i<10;i++)
	 {
	 	cout<<b[i]<<" ";
	 }
}
