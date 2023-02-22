#include<iostream>

using namespace std;

template<class t>

class stack
{
private:
    int top;
    t st[100];
public:
    stack()
    {
        top=-1;
    }
    void push(t i)
    {
        st[++top]=i;
    }
    t pop()
    {
        return st[top--];
    }
};
int main()
{
 stack<int>s;
 s.push(3);
 s.push(4);
 cout<<s.pop()<<endl;

}
