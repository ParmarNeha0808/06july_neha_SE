#include<iostream>
using namespace std;
class A
{
	public:
		int aid;
		string anm;
			void getdata()
			{
			cout<<"Enter the aid:";
			cin>>aid;
			cout<<"enter the aname:";
			cin>>anm;
		}
};
class B
{
	public:
		int bid;
	    string bnm;
		
			void getdata()
			{
			cout<<"Enter the bid:";
			cin>>bid;
			cout<<"Enter the bname:";
			cin>>bnm;
		}
};
class tops: public A, public B
{
	public:
	void showdata()
	{
	cout<<endl<<"-------------"<<anm<<"---------------";
	cout<<endl<<"your id is:"<<aid;
	cout<<endl<<"---------------"<<bid<<"---------------";
	cout<<endl<<"your id is:"<<bid;
	}
};
int main()
{
	tops t1;
	t1.getdata();
	t1.showdata();
}
