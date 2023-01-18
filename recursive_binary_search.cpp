#include<iostream>
using namespace std;
int recursive_BS(int arr[],int low, int high, int key)
{
    int mid=(low+high)/2;

    if (low>high)
    {
        return false;
    }
    
    else
    {
        if(key==arr[mid])
        {
            return mid;
        }
        else if (key>arr[mid])
        {
            return recursive_BS(arr,mid+1,  high, key);
        }
        else
        {
            return recursive_BS(arr,low, mid-1, key);
        }
    }

}

int main()
{
    int ARR[11]={1,3,4,6,10,5,11,17,8,9,2};
    int k;
    cout<<"enter value of k: ";
    cin>>k;
    int l=0;
    int h=10;
    int c;
    c=recursive_BS(ARR,l,h,k);
    cout<<c;
}