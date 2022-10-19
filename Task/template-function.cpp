#include<iostream>
using namespace std;
template <class sum>
sum add(sum a,sum b)
{
	return a+b;
}
template <class sm>
sm mul(sm a,sm b)
{
	return a*b;
}
template <class d>
d div(d a,d b)
{
	return a/b;
}
int main()
{
	cout<<add <int> (25,36);
	cout<<endl<<mul <int> (50,2);
	cout<<endl<<div <float> (254,14);
	return 0;
}
