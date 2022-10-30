#include<iostream>
using namespace std;
class person
{
	public:
		char name[20];
		int age;
		void pget()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<endl<<"Enter the age:";
			cin>>age;
		}
};
class student
{
	public:
		int per;
		void sget()
		{
			cout<<endl<<"Enter the sudent percentage:";
			cin>>per;
		}
};
class teacher
{
	public:
		int sal;
		void tget()
		{
			cout<<endl<<"Enter the teacher salary:";
			cin>>sal;
		}
};
class member: public person, public student, public teacher
{
	public:
		void showdata()
		{
			cout<<endl<<"Member name is:"<<name;
			cout<<endl<<"Member age is:"<<age;
			cout<<endl<<"member percentage is:"<<per;
			cout<<endl<<"member salary is:"<<sal;
		}
};
int main()
{
	member mem;
	mem.pget();
	mem.sget();
	mem.tget();
	mem.showdata();
}
