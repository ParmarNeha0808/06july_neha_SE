#include<iostream>
using namespace std;
class biggest
{
    int a,b;
	public:
	void input();

    void display();
};

void biggest::input()
{
	cout<<"Enter 2 number:";
	cin>>a>>b;
}
void biggest::display()
{

    if(a>b)

    cout<<"Biggest no.:"<<a;

    else

    cout<<"Biggest no.:"<<b;

}
int main()
{
	biggest b;
	b.input();
    b.display();
}
