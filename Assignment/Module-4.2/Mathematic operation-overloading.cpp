#include<iostream>
using namespace std;
class addition
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
};
class subtraction
{
	public:
		int sub(int a,int b)
		{
			return a-b;
		}
};
class multiplication
{
	public:
		int mul(int a,int b)
		{
			return a*b;
		}
};
class division
{
	public:
		int div(int a,int b)
		{
			return a/b;
		}
};
int main()
{
	int a,b;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	addition obj;
	subtraction obj1;
	multiplication obj2;
	division obj3;
	cout<<"addition is:"<<obj.add(a,b);
	cout<<endl<<"subtraction is:"<<obj1.sub(a,b);
	cout<<endl<<"multiplication is:"<<obj2.mul(a,b);
	cout<<endl<<"division is:"<<obj3.div(a,b);
	return 0;
}
