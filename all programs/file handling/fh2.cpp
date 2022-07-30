#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fn;
	fn.open("Rishi.txt",ios::in);
	if (!fn) {
		cout << "No such file";
	}
	else {
		char ch;

		while (1) {
			fn >> ch;
			if (fn.eof())
				break;

			cout << ch;
		}

	}
}
