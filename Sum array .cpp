#include<iostream>
using namespace std;
template<class T>
T SumArray (T arr[],int length)
{
    T sum= 0;
    for(int i=0;i<length;i++)

    sum=sum+arr[i];
    return sum;
}

int main()
{
    int arr[5];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    cout<<"Sum is "<<SumArray(arr,5);
    return 0;
}
