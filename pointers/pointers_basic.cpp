#include<iostream>
using namespace std;

int main()
{
    int num=5;
    cout<<num<<endl;
    //adress of operator -&
    cout<<"address of num is  "<<&num<<endl;
    //declaring a pointer
    int *ptr=&num;
    cout<<"Address of num"<<ptr<<endl;
    cout<<"Address of ptr"<<&ptr<<endl;
    //printing value of num using derefernce operator(*)
    cout<<"value of num is "<<*ptr<<endl;
    //size of integer and pointer
    
    return 0;
} 