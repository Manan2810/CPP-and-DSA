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
    cout<<"size of number is"<<sizeof(num)<<endl;
    cout<<"size of pointer is"<<sizeof(ptr)<<endl;

    double d=4.3;
    double *ptr2=&d;

    cout<<"size of d is"<<sizeof(d)<<endl;
    cout<<"size of pointer is"<<sizeof(ptr2)<<endl;

    //p is a pointer to int and it is pointing to a garbage address
    // int *p;
    // cout<<"value of address to which p is pointing"<<*p<<endl;
    // cout<<"value of the address"<<p<<endl;
    // int *pp=0;//here segmentation error will occur as p is pointing to a memory that doesn't exist
    // cout<<"value of address to which p is pointing"<<*pp<<endl;

    // some cases
    cout<<"case 1"<<endl;
    int n=5;
    int *p1=&n;
    int a=*p1;
    a++;
    cout<<n;//no changes in n will be there 
    cout<<endl;
    cout<<"case 2"<<endl;
    int b=5;
    int *p2=&b;
    (*p2)++;
    cout<<b;//changes will be there in b
    cout<<endl;
    cout<<"copying a pointer"<<endl;
    int e=5;
    int *m=&e;
    int *o=m;
    cout<<m<<"      "<<o<<endl;
    cout<<*m<<"      "<<*o<<endl;
    // here both m and o are sharing the same address
    
    // ^ important concept
    int i=3;
    int *p4=&i;
    // cout<<(*p4)++<<endl;
    *p4=*p4+1; 
    cout<<"before"<<p4<<endl;
    p4=p4+1;
    cout<<"after"<<p4;    

    cout<<endl;
} 