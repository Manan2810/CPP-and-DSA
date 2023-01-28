#include<iostream>
using namespace std;

int partition(int arr[],int s, int e)
{
    int pivot= arr[s];

    //counting number of elements less than the pivot element
    int count = 0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    
    //right index of pivot 
    int pivotindex = s + count;
    
    //swapping the element
    swap(arr[pivotindex],arr[s]);
    
    int i=s ,j=e; 
    //managing the left and right part
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[],int s ,int e)
{
    //base condition
    if (s>=e)
    {
        return;
    }

    //partitioning function called
    int p = partition(arr,s,e);

    //sorting the left half
    quicksort(arr,s,p-1);

    //sorting the right half
    quicksort(arr,p+1,e);
}



int main()
{
    int n;
    cout<<"enter number of elements in an array";
    cin>>n;
    int Arr[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    //call quick sort function
    quicksort(Arr,0,n-1);

    cout<<"prnting the sorted array";
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<< " ";
    }

}
