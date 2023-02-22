#include<iostream>
using namespace std;

template<class t>

int addition(t& x,t& y)
{
    return x+y;
}
int main()
{
    int a,b;
    a=10;
    b=20;
    cout<<"Addition is  "<<addition(a,b);
}
