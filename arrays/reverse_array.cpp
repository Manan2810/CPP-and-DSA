#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }

    for(int i=0; i<n/2;i++)
    {
        int temp;
        temp=Arr[i];
        Arr[i]=Arr[n-i-1];
        Arr[n-i-1]=temp;
    }
    cout<<"the reversed array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i];
    }

}