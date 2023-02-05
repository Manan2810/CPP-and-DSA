#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int key;
    cout<<"enter key";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<endl;
     for(int i=0;i<n;i++)
     { 
        if(arr[i]==key)
        {
            cout<<"element found at index"<<i;
        }
        continue;
        
     }
    cout<<endl;
}

  