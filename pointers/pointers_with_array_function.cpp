#include<iostream>
using namespace std;

int main()
{
    // int arr[10]={1,3,14,2,3,4,3};
    // cout<<"Address of first memory block is"<<arr<<endl;
    // cout<<"Address of first memory block is"<<&arr[0]<<endl;
    

    // cout<<"printing value of index 0 or first memory location"<<endl;
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;

    // cout<<endl;
    // *arr=*arr+1;
    // cout<<arr[0]<<endl;
    // cout<<endl;

    // cout<<*(arr+1)<<endl;
    // cout<<arr[1]<<endl;
    // cout<<2[arr]<<endl;
    // cout<<*(2+arr)<<endl;

    // ~difference between a pointer and an array
    int arr[10];
    cout<<sizeof(arr)<<endl;
    int *ptr=&arr[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(&arr[1])<<endl;
    cout<<sizeof(*arr)<<endl;

    cout<<endl;
    char ch='a';
    ch++;
    cout<<ch;


}