#include<iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int max =INT_MIN;
    int arr[100];
    int n;
    cout<<"value of n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else{
            continue;
        }
    }
    cout<<"maximum element is "<<max;
}