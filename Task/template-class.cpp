#include<iostream>
using namespace std;
template <typename sum>
class late
{
public:
    sum mod(sum a,sum b)
    {
        return a+b;
    }
};
int main()
{
    late <int> temp;
    cout<<temp.mod(845,47);
    late <float> temp1;
    cout<<endl<<temp1.mod(52,78.9);
    late <double> temp2;
    cout<<endl<<temp2.mod(63,12);
    return 0;
}
