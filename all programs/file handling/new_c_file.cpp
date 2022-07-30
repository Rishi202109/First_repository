#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream mf;
	mf.open("Rishi14.txt", ios::out | ios::in | ios::app);
	mf << "aakashame nedu naa kosame" << endl;
	if (!mf)
		cout << "Error";
//	mf.close();
//	mf.open("Rishi11.txt", ios::out | ios::in | ios::app);
//    char ch;
//    int i = 0;
//    while(i < 15)
//    {
//    	mf>>ch;
//    	
//    	if(mf.eof())
//    	break;
//    	cout << ch;
//    	i ++;
//	}
//	mf.close();
}

