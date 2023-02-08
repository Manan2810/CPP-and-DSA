//Design the Logic to Find a Missing Number in a Sorted Array.
#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"enter value of n";
    cin>>n;
    cout<<endl;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //solving problem statement
    for(int i=0;i<n-1;i++)
    {
        int difference;
        difference=arr[i+1]-arr[i];
        if (difference==1)
        {
            continue;
        }
        else{
            cout<<"element "<<arr[i]+1<<" is missing"<<endl;
        }
    }

}