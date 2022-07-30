#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number "<<i<<endl;
		cin>>arr[i];
		
	}

    for (int j=0;j<n;j++)
    {
    	int l=0;
    	 for (int k=0;k<n;k++)
    	 {
    	 	if(k!=j)
    	 	{
    	 		if(arr[k]==arr[j])
    	 		l++;
    	 		
			 }
		 }
		 if(l==0)
		 cout<<arr[j]<<" ";
	}
}
