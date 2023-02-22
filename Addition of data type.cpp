#include<iostream>
using namespace std;

template<class T,class T1>

 T1 Addition( T x, T1 y)
 {

     return  (x+y);

 }
 int main()
 {
     int a;
     float b;
    // a=10;
     //b=20.50;
     cout<<"Sum is "<<Addition<int,float>(10,10.5);
     return 0;
 }
