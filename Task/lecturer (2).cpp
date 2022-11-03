#include<iostream>
using namespace std;
class lecturer
{
	public:
		char lecturer[20];
		char subject[20];
		char course[20];
		int lecturers;
		
		int in()
		{
			cout<<"Enter Name of the lecturer:";
			cin>>lecturer;
			cout<<"\nEnter Name of the subject:";
			cin>>subject;
			cout<<"\nEnter Name of course:";
			cin>>course;
			cout<<"\nEnter Number of lecturers:";
			cin>>lecturers;
		}

	int details()
	{
		int lec;
		cout<<"\nEnter the a lecture details:";
		cin>>lec;
		lecturers+=lec;
		cout<<"\nYour lecture details:"<<lecturers;	
	}
	int name()
	{
	int lec;
	cout<<"\nEnter the name and lecture details:";
	cin>>lec;
			if(lec<=lecturers)
			{
				lec-=lecturers;
				cout<<"\nlecture details:"<<lecturers;
			}
			else
			{
				exit(0);
			}
		}
	void display()
	{
		cout<<"\nlectrer:";
		cin>>lecturer;
		cout<<"\nlecturers:"<<lecturer;
	}
};
int main()
{
	int i;
	lecturer lc;
	lc.in();
	cout<<"\n name \n details:";
	
	cin>>i;
	if(i==1)
	{
	   lc.display();	
	}
	else if(i==2)
	{
		lc.details();
	}
	else if(i==3)
	{
		lc.name();
	}
	return 0;
	
}
