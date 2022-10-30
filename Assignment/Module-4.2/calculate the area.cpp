#include<iostream>
using namespace std;

int C(int r)
{
        return(3.14 * r * r);
}
int T(int b,int h)
{
        return(0.5 * b * h);
}
int R(int l,int b)
{
        return (l * b);
}
int main()
{
    int b,h,r,l;
    int ch;

     do
    {
       cout<<"\n 1. Area of Circle";
       cout<<"\n 2. Area of Triangle";
       cout<<"\n 3. Area of Rectangle";
       cout<<"\n 4. Exit";
       cout<<"\n\n Enter Your Choice : ";
       cin>>ch;
       
    switch(ch)
        {
        case 1:
        {
        cout<<"\n Enter the Radius of Circle : ";
        cin>>r;
        cout<<"\n Area of Circle : "<<C(r);
        break;
        }
        case 2:
        {
        cout<<"\n Enter the Base & Height of Triangle : ";
        cin>>b>>h;
        cout<<"\n Area of Triangle : "<<T(b,h);
        break;
        }
        case 3:
        {
        cout<<"\n Enter the Length & Bredth of Rectangle : ";
        cin>>l>>b;
        cout<<"\n Area of Rectangle : "<<R(l,b);
        break;
        }
        case 4:
        exit(0);
        default:
        cout<<"\n Invalid Choice... ";
        }
        }while(ch!=4);
        return 0;
}
