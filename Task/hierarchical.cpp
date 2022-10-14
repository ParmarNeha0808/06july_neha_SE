#include<iostream>
using namespace std;
class sum
{
	public:
		int x,y;
		getdata()
		{
			cout<<"Enter the value:"<<endl;
			cin>>x>>y;
		}		
};
class add:public sum
{
	public:
		getadd()
		{
			cout<<" sum of add:"<<x+y<<endl;
		}
};
class sub:public sum
{
	public:
		getsub()
		{
			cout<<"sum of sub;"<<x-y<<endl;
		}
};
class mul:public sum
{
	public:
	getmul()
	{
		cout<<"sum of mul:"<<x*y<<endl;
	}
};
int main()
{
	
	add a;
	sub b;
	mul c;
	a.getdata();
	a.getadd();
	b.getdata();
	b.getsub();
	c.getdata();
	c.getmul();
	return 0;
}
