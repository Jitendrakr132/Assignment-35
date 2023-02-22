#include<iostream>
#include<string>
using namespace std;
class Shape
{
    string shape;
public:
    Shape()
    {

    }
    Shape(string s)
    {
        shape=s;
    }
    void setShape(string s)
    {
        shape=s;
    }
    string getShape()
    {
        return shape;
    }
};
template<typename T>
class circle:public Shape
{
   T x;
   T y;
   T radius;
   public:
       circle(T centerX, T centerY,T r,string s): Shape(s)
        {
            x=centerX;
            y=centerY;
            radius=r;
        }
        circle(T centerX, T centerY,T r): Shape()
        {
            x=centerX;
            y=centerY;
            radius=r;
        }
        cicrle(T r)
        {
            radius =r;
        }
        circle()
        {  }
        T area()
        {
            return 3.14*radius*radius;
        }
};
int main()
{
    circle<float> c(0.0,0.0,10.0,"Circle");
    cout<<"\n Area of circle A :: "<<c.area()<<endl;
    cout<<"\n Shape is :: "<<c.getShape()<<endl;
    return 0;

}
