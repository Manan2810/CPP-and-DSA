#include<iostream>
using namespace std;
void print(int * p)
{
    cout<<p<<endl;
    cout<<*p<<endl;
}

void update(int *p)
{
    // ^outside the function p=p+1 will not work
    // p=p+1;
    // cout<<"inside"<<p<<endl;
    // ~outside the function *p=*p+1 will work
    *p=*p+1;
}
void sumofarray(int arr[],int n)
{
    cout<<"size"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
//    int num=8;
//    int *ptr =&num;
//    print(ptr); 
//    cout<<"before"<<ptr<<endl;
    // update(ptr);
     // cout<<"after"<<ptr<<endl;
    // &changes observed outside the function
//      cout<<"before"<<*ptr<<endl; //8
//     update(ptr);
//     cout<<"after"<<*ptr<<endl; //9

        int arr[10]={1,2,3,4,5,6,7,8,9,10};
        sumofarray(arr,10);




}