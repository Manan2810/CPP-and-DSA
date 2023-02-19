#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements u want in the array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"printing the array without sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // ! sorting the array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"printing the array after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}