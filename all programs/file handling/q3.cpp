#include<iostream>
using namespace std;
class student{
	public:
		int rollnum;
    char name[20];
		float marks;
};
int main(){
	int t;
	cout<<"no of columns";
	cin>>t;
	int index[t];
	student *a[t];
	for(int i=0;i<t;i++){
		cout<<"no of columns in "<<i<<"th row";
		int q;
		cin>>q;
    index[i] = q;
		a[i]=new student[q];
		for(int j=0;j<q;j++){
			cout<<"enter roll no";
			cin>>a[i][j].rollnum;
			cout<<"enter name";
			cin>>a[i][j].name;
			cout<<"enter marks";
			cin>>a[i][j].marks;
		}
		
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<index[i];j++){
			cout<<a[i][j].rollnum<<" "<<a[i][j].name<<" "<<a[i][j].marks<<"    ";
		}
		cout<<endl;
	}
	for(int k=0;k<t;k++){
		for(int i=0;i<index[i]-1;i++){
			for(int j=i;j<index[i]-1;j++){
				if(a[k][j].marks<a[k][j+1].marks){
					swap(a[k][j].marks,a[k][j+1].marks);
					swap(a[k][j].rollnum,a[k][j+1].rollnum);
					swap(a[k][j].name,a[k][j+1].name);
				}
			}
		}
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<index[i];j++){
			cout<<a[i][j].rollnum<<" "<<a[i][j].name<<" "<<a[i][j].marks<<"    ";
		}
		cout<<endl;
	}
	
}
