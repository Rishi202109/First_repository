#include <iostream>
using namespace std;
int main()
{
	int n,time=0;
	cout<<"enter the number of people "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the time taken by the person "<<i+1<<" in minutes"<<endl;
		cin>>a[i];
	}
	cout<<"accending order is"<<endl;
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(a[k]<a[j])
			{
				int l=a[j];
				a[j]=a[k];
				a[k]=l;
			}
		}
		
	}
	cout<<"renaming the persons according to their time taken"<<endl;
	for(int h=0;h<n;h++)
	{
	cout<<" let the person who takes "<<a[h]<<" time be person "<<h+1<<endl;
    }
    cout<<endl;
    for( int h=1;h<n;h++)
    {
    	cout<<"start person 1 and and person "<<h+1<<endl;
    	time=time+a[h];
    	if(h<n-1)
    	{
    		cout<<"return person 1"<<endl;
    		time=time+a[0];
		}
		
	}
	cout<<"total time taken is "<<time<<" minutes"<<endl;
	
}
