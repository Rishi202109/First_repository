#include <iostream>
using namespace std;
int main()
{
	float L,B,R,P,C,AR,AC;
	cout<<"enter the length of the rectangle in meters ";
	cin>>L;
	cout<<"\nenter the breadth of the rectangle in meters ";
	cin>>B;
	cout<<"\nenter the radius of the circle in meters ";
	cin>>R;
	P=2*(L+B);
	AR=L*B;
	AC=3.14*R*R;
	C=6.28*R;
	cout<<"\nthe perimeter of the rectangle in meters= "<<P;
	cout<<"\nthe area of the rectangle in square meters= "<<AR;
	cout<<"\n the circumference of the circle in meters= "<<C;
	cout<<"\n the area of the circle in square meters "<<AR;
	
	return 0;
	
}
