#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fn;
	fn.open("Rishi.txt",ios::out);
	if(!fn)
	{
		cout<<"file named Rishi is not created";
	}
	else
	{
		cout<<"file is succesfully created and opened "<<endl;
		fn<<"gelupu thalupule theese";
		fn.close();
	}
}
