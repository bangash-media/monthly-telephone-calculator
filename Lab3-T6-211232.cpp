#include<iostream>
using namespace std;
int main()
{
	float call,bill1,bill2,bill3,telephone;
	cout<<"\n\n\t\t\tTELEPHONE BILL CALCULATOR\n\n";
	cout<<"\n\n\t\tEnter number of calls per month : "; cin>>call;
	
	bill1=(call-70)*0.6;
	bill2=(call-100)*0.5;
	bill3=(call-130)*0.4;
	cout<<endl<<endl;
	cout<<"*******************************************************\n\n";
	if(call>0 && call<=70)
	{
		telephone=250;
		cout<<"\t\tYour monthly bill is :"<<telephone<<endl;
	}
	
	if(call>70&& call<=100)
	{
		telephone=250+bill1;
		cout<<"\t\tYour monthly bill is :"<<telephone<<endl;
	}
	
	if(call>=100&&call<=130)
	{
		telephone=250+18+bill2;
		cout<<"\t\tYour monthly bill is :"<<telephone<<endl;
	}
	
	if(call>130)
	  {
	 telephone=250+18+15+bill3;
		cout<<"\t\tYour monthly bill is :"<<telephone<<endl;
	}
	
	return 0;
}
