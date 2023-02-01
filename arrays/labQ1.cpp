#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements u want to enter in an array ";
    cin>>n;
    cout<<endl;
    int Arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i<j && Arr[i]>Arr[j])
            {
                cout<<"the pair are "<<i<<","<<j<<endl;
            }
        }
    }
}