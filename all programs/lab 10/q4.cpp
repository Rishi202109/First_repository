#include <iostream>
using namespace std;
struct point
{
   float x;
   float y;
};
int main()
{
 point p[3];
 for(int i=0;i<2;i++)
 {
 	cout<<"enter the x co-ordinate of point "<<i+1<<endl;
 	cin>>p[i].x;
 	cout<<"enter the y co-ordinate of point "<<i+1<<endl;
 	cin>>p[i].y;
 	
 }
 p[2].x=p[0].x*p[1].x;
 p[2].y=p[0].y*p[1].y;
 cout<<"point number 3 is ("<<p[2].x<<", "<<p[2].y<<")";
 
	
}
