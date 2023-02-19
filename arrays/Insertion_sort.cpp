#include<iostream>
using namespace std;

int main()
{
     int n;
    cout<<"enter number of elements u want in the array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of the array";
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"printing the array without sorting"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // ! sorting the array
    for(int j=2;j<=n;j++)
    {
        int key;
        key=arr[j];
        int i=j-1;
        while(i>0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }

    cout<<"printing the array after sorting"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}