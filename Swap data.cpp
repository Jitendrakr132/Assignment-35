#include<iostream>
using namespace std;
template<class t1>

int Swapping(t1 &x,t1 &y)
    {
        t1 t;
        t=x;
        x=y;
        y=t;
        return 0;
    }
int main()
{
    int a,b;
    a=5;
    b=4;
    Swapping (a,b);
    cout<<a<<","<<b;
    return 0;
}
