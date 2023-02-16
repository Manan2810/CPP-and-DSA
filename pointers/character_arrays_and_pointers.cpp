#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    cout<<arr<<endl;
    cout<<ch<<endl;

    int * p=&arr[0];
    char *c =&ch[0];

    cout<<p<<endl; //print address of first element
    cout<<c<<endl; //print the content ie abcde 

    char temp='z';
    char *ptr=&temp;
    cout<<ptr; 
}