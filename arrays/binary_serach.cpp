#include<iostream>
using namespace std;

int Binary_Search(int arr[],int low, int high, int key)
{
    while(low<=high)
    {
        int mid=((low+high)/2);
        if (key==arr[mid])
        {
            return mid;
        }
        else if (key>arr[mid])
        {
            low=mid+1;
        }
        else 
        {
            high=mid-1;
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
    c=Binary_Search(ARR,l,h,k);
    cout<<c;
}