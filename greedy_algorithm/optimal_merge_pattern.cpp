#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of files";
    cin>>n;
    int files[n];
    for (int i=1;i<=n;i++)
    {
        files[i]=i;
    }
    cout<<"the files are as follows"<<endl;
    for (int i=1;i<=n;i++)
    {
        cout<<"F"<<files[i]<<" ";
    }
    cout<<endl;
    cout<<"enter number of records in each file"<<endl;
    int records[n];
    for(int i=1;i<=n;i++)
    {
        cin>>records[i];
    }
    //^ arranging the files in increasing order of records
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if (records[j]>records[j+1])
            {
                swap(files[j],files[j+1]);
                swap(records[j],records[j+1]);
            }
        }
    }
    cout<<"files after swapping"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"F"<<files[i]<<" ";
    }
    cout<<endl;
    cout<<"records after swapping"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<records[i]<<" ";
    }
    cout<<endl;

    //^ problem statement
    int sum=records[1]+records[2];
    int sum1[100];
    sum1[1]=sum;
    for(int i=3;i<=n;i++)
    {
        sum=sum+records[i];
        sum1[i-1]=sum;
    }
    cout<<"record movement at each stage"<<endl;
    for(int i=1;i<=n-1;i++)
    {
        cout<<sum1[i]<<endl;
    }
    int sum2=0;
    cout<<"total record movement"<<endl;
    for(int i=1;i<=n-1;i++)
    {
        sum2=sum2+sum1[i];
    }
    cout<<sum2;

}