#include<iostream>
using namespace std;
class calculation
{
	int no1,no2;
	public:
		get()
		{
			cout<<"Enter the number:";
			cin>>no1;
			cout<<endl<<"Enter the number:";
			cin>>no2;
		}
		int add()
		{
			return no1 + no2;
		}
		int sub()
		{
			return no1 - no2;
		}
		int mul()
		{
			return no1 * no2;
		}
		int div()
		{
			return no1 / no2;
		}
};
int main()
{
	int choice;
	calculation cal;
	cout<<"  Enter 1 add 2 numbers:";
	cout<<"\nEnter 2 sub 2 numbers:";
	cout<<"\nEnter 3 mul 2 numbers:";
	cout<<"\nEnter 4 div 2 numbers:";

	do
	{
		cout<<endl<<"Enter the choice:";
		cin>>choice;
		switch(choice){
		
		case 1:
			cal.get();
			cout<<"Result"<<cal.add()<<endl;
			break;
		
		case 2:
			cal.get();
			cout<<"Result"<<cal.sub()<<endl;
			break;
			
		case 3:
			cal.get();
			cout<<"Result"<<cal.mul()<<endl;
			break;
			
		case 4:
			cal.get();
			cout<<"Result"<<cal.div()<<endl;
			break;
		}		
	}	
	while(choice >= 1 && choice <= 4);
	return 0;
}
