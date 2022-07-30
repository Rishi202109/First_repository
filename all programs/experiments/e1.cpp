#include <iostream>
using namespace std;
class student
{
	public :
		char name[100];
		int rno;
		int PM;
		int CM;
};
int main()
{
	student s[3];
	for(int i=0;i<3;i++)
	{
		cout<<"enter the name "<<endl;
		cin>>s[i].name;
		cout<<"enter the roll number "<<endl;
		cin>>s[i].rno;
		cout<<"enter the physics marks "<<endl;
		cin>>s[i].PM;
		cout<<"enter the chemistry marks "<<endl;
		cin>>s[i].CM;
	}
		for(int i=0;i<3;i++)
		{
		
		cout<<"name is "<<s[i].name<<endl;
		cout<<"roll number is "<<s[i].rno<<endl;
		cout<<"physics marks is "<<s[i].PM<<endl;
		cout<<"chemistry marks is "<<s[i].CM<<endl;
	}
	
}
