#include<iostream>
using namespace std;

template<class t>
 class HashT
 {
 private:
    int top;
    t arr[100];
 public:
    t insert(t a)
    {
        if(!arr.empty())
            arr[top++]=a;
            else
                return 0;
    }
    t search(t a)
    {
        if(arr[]!=-1)
            return 0;
        else
            for(int i=0;i<arr.end();i++)
        {
            if(arr[i]==a)
                return a;
        }
    }
    t fun(t n)
    {
        return n%10;
    }

 };
 int main()
 {
     HashT<int >s;
     s.insert(75);
     cout<<"hash table is "<<s.fun(75)<<endl;
     return 0;
 }

