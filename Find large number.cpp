#include<iostream>
using namespace std;
template<class T>

T maxium(T x,T y)
    {
        return (x>y)?x:y;

    }

int main()
{
    int x,y;
    float a,b;
    char ch1,ch2;

    cout<<" this is large number  "<<maxium<int >(110,60)<<endl;
    cout<<"This is large "<<maxium<float>(15.5,51)<<endl;
    cout<<"This is large "<<maxium<char>('a','v')<<endl;

    return 0;
}
