#include <iostream>
using namespace std;
class dis
{
	public:
		int feet;
		int inch;
};
//	public:

		dis add(dis d1 , dis d2)
	{
	int f=d1.feet+d2.feet+(d1.inch + d2.inch)/12;
	int i=(d1.inch+d2.inch)%12;
	cout<<"sum is "<<f<<" "<<i;
    }	
int main()
{
	
	dis D1;
	dis D2;
	D1.feet=10;
	D1.inch=9;
	D2.feet=11;
	D2.inch=4;
    add(D1,D2);
}
