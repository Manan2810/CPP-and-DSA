#include<iostream>
using namespace std;

void merge(int *Arr,int p,int q,int m)
{
    int n1=m-p+1;
    int n2=q-m;
    int L[n1];
    int R[n2];
    for(int i=1;i<n1;i++)
    {
        L[i]=Arr[p+i-1];
    }
    for(int j=1;j<n2;j++)
    {
        R[j]=Arr[m+j];
    }
    L[n1+1]=9999999;
    R[n2+1]=9999999;
    int i=1;
    int j=1;
    for(int k=p;k<=q;k++)
    {
        if(L[i]<=R[j])
        {
            Arr[k]=L[i];
            i++;
        }
        else{
            Arr[k]=R[j];
        }
    }
}


void merge_sort(int *Arr,int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        merge_sort(Arr,s,mid);
        merge_sort(Arr,mid+1,e);
        merge(Arr,s,e,mid);
    }
}

void display(int *Arr,int N)
{
    for(int i=1;i<=8;i++)
    {
        cout<<Arr[i];
    }
}


int main()
{
    int arr[8]={5,4,6,1,2,8,3,9};
    int start=1;
    int end =8;
    merge_sort(arr,start,end);
    int n=8;
    display(arr,n);

}