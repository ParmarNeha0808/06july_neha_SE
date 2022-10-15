#include <iostream>
using namespace std;
class Add
{
	int c;
public:
    Add(int a, int b);
};

Add::Add(int a, int b)
{
    c = a + b;
    cout << "Sum of addition is:- " << c << endl;
}

class Sub
{
	 int c;
public:
    Sub(int a,int b);
};

Sub::Sub(int a, int b)
{
    c = a - b;
    cout << "sum of subtraction is:- " << c << endl;
}

class Mul
{

    int c;

public:
    Mul(int a, int b);
};

Mul::Mul(int a, int b)
{
    c = a * b;
    cout << "sum of multiplication is:- " << c << endl;
}

class Div
{
    int c;

public:
    Div(int a, int b);
};

Div::Div(int a, int b)
{
    c = a / b;
    cout << "sum of division is:- " << c << endl;
}

int main()
{
    
    int x, y;
    cout << "Enter 2 numbers:-\n";
    cin >> x >> y;

    Add ad(x, y);
    Sub sb(x, y);
    Mul mut(x, y);
    Div dv(x, y);

   
}
