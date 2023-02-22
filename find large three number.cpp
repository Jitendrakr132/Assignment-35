#include<iostream>
using namespace std;
/*template<class t1,class t2,class t3,class t4>

class Max
{
public:
    t1 x;
    t2 y;
    t3 z;
    t4 Large()
    {
        if(x>y && x>z)
            return x;
        else if (y>z&& x<y)
            return y;
        else
            return z;
    }
};
int main()
{
    Max<int ,int ,int ,int>m;
    m.x=8;
    m.y=0;
    m.z=0;

    cout<<"The large number is =  "<<m.Large();
    return 0;
}  */
template<class t>
t Findlarge(t num1,t num2,t num3)
{
    if(num1>=num2)
    {
        if(num1>=num3)
            return num1;
        else
            return num3;
    }
    if(num2>=num1)
    {
        if(num2>=num3)
            return num2;
        else
            return num3;
    }
}
int main()
{

    int num1=10;
    int num2=67;
    int num3=30;
    cout<<"It is large number :"<<Findlarge(num1,num2,num3);
    return 0;
}
