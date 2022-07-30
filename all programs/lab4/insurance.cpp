#include<iostream>
using namespace std;
int main()
{
	int A;
	char G,P,H,m,f,c,v,e,p;
	cout<<"enter your age \nenter your gender m if male, f if female\n enter c if city or v \nenter e if your health is good or p\n "<<endl;
	cin>>A>>G>>P>>H;
	if(A>25 && A<35 )
	{
		if(G=='m')
		{
		
		if(P=='c'&&H=='e')
		{
			cout<<"your premium is rs.4 per thousand \nyour policy amount cannot exceed 2lakh rup";
		}
		if(P=='v'&&H=='p')
		{
			cout<<"your premium is rs.6 per thousand \nyour policy amount cannot exceed 10000 rup";
			
	    }
	}
	    else
	    {
	    	cout<<"you cannot be insured";
		}
		
		
		if(G=='f')
		{
			if(P=='c'&&H=='e')
			{
				cout<<"your premium is rs.3 per thousand \nyour policy amount cannot exceed 1lakh rup";
			}
			else
			{
				cout<<"you cannot be insured";
			}
		}
	}
	else
	{
		cout<<"you cannot be insured";
	}
}
