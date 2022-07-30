#include<iostream>
using namespace std;
int main()
{int arr[10][10],n,sum=0,k=0;
 cout<<"Enter the number of row and columns: ";
 cin>>n;
 cout<<"Enter the values of the square matrix: ";
 for(int i=0;i<n;i++)
 {for(int j=0;j<n;j++)
   cin>>arr[i][j];
 }
 for(int i=0;i<n;i++)
 {for(int j=0;j<n;j++)
   cout<<arr[i][j]<<" ";
  cout<<endl;
 }
 for(int i=0;i<n;i++)
  sum+=arr[i][i];
 cout<<"The sum of the diagonals is: "<<sum<<endl;
  for(int i=0;i<n;i++)
 {for(int j=0;j<i;j++)
   {
   	if(arr[i][j]==0)
   	{
   		int k=1;
   		break;
	}
   }
   if(k==1)
   break;
 }
 if(k==1)
 cout<<"it is a upper triangular matrix";
 if(k==0)
 cout<<"it is not a upper triangular matrix";
 return 0;
}
