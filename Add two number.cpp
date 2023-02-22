#include<iostream>
using namespace std;

template<class T>

 T Addition( T x, T y)
 {

     return (x+y);

 }
 int main()
 {
     int a,b;
     //a=10;
    // b=20;
     cout<<"Sum is "<<Addition<int>(10,20);
     return 0;
 }
