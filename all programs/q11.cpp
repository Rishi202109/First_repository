#include <iostream>
using namespace std;
int add(float x1,float x2,float y1,float y2);
int sub(float x1,float x2,float y1,float y2);
int mult(float x1,float x2,float y1,float y2);
class complex
{
	public:
	float rp;
	float ip;
	 int add(float x1,float x2,float y1,float y2)
	{
		cout<<"sum is "<<x1+x2<<" +i"<<" ("<<y1+y2<<")"<<endl;
		return 0;
	}
	 int sub(float x1,float x2,float y1,float y2)
	{
		cout<<"answer is "<<x1-x2<<" +i"<<" ("<<y1-y2<<")"<<endl;
		return 0;
	}
		 int mult(float x1,float x2,float y1,float y2)
	{
		cout<<"product is "<<x1*x2-y1*y2<<" +i"<<" ("<<x1*y2+y1*x2<<")"<<endl;
		return 0;
	}
};
int main()
{
	complex c1;
	complex c2;
	complex c3;
	cout<<"enter the real and imaginary parts of C1"<<endl;
	cin>>c1.rp>>c1.ip;
	cout<<"enter the real and imaginary parts of C2"<<endl;
	cin>>c2.rp>>c2.ip;
	c3.add(c1.rp,c2.rp,c1.ip,c2.ip);
	c3.sub(c1.rp,c2.rp,c1.ip,c2.ip);
	c3.mult(c1.rp,c2.rp,c1.ip,c2.ip);
		
}
