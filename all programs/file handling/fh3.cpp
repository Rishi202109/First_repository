#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream mf;
	mf.open("Rishi2.txt", ios::out| ios::in);
	mf<<"aakashame nedu naa kosame ";
    char ch;
    int i = 0;
    while(i < 15)
    {
    	mf>>ch;
    	
//    	if(mf.eof())
//    	break;
    	cout << ch;
    	i++;
	}
	mf.close();
}

