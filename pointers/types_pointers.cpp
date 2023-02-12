#include<iostream>
using namespace std;

int main()
{
    cout<<"null pointer"<<endl;
    int *r=0;
    cout<<r;
    cout<<endl;
    cout<<"double pointer"<<endl;
    int a=5;
    int *p=&a;
    int **q=&p; //double pointer
    //! printing address of a
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
    //* printing address of p
    cout<<&p<<endl;
    cout<<q<<endl;
    //^ printing value of a
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<"void pointer"<<endl;
    void * m;
    int n=10;
    m=&n;
    cout<<&n<<endl;
    cout<<m<<endl;

    


    
    return 0;
    
}