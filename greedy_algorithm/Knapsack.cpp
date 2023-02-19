#include<iostream>
using namespace std;

int main()
{
    int M;
    cout<<"enter the maximum weight knapsack can have";
    cin>>M;
    int n;
    cout<<"enter number of objects";
    cin>>n;
    int obj[n];
    // ^ entering objects
    for(int i=1;i<=n;i++)
    {
        obj[i]=i;
    }
    cout<<"objects are -";
    for(int i=1;i<=n;i++)
    {
        cout<<obj[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the profit of each object"<<endl;
    float P[n];
     for(int i=1;i<=n;i++)
    {
        cin>>P[i];
    }
     cout<<"profit of objects are -";
    for(int i=1;i<=n;i++)
    {
        cout<<P[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the weight of each object"<<endl;
    float W[n];
    for(int i=1;i<=n;i++)
    {
        cin>>W[i];
    }
    cout<<"weight of objects are -";
    for(int i=1;i<=n;i++)
    {
        cout<<W[i]<<" ";
    }
    cout<<endl;
     // ^ enter the ratio of each object
    float R[n];
    for(int i=1;i<=n;i++)
    {
        R[i]=(P[i]/W[i]);
    }
    cout<<"Ratio of objects are -";
    for(int i=1;i<=n;i++)
    {
        cout<<R[i]<<" ";
    }
    cout<<endl;
    //^ sorting ratio array in descending order
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(R[j]<R[j+1])
            {
                swap(R[j],R[j+1]);
                swap(P[j],P[j+1]);
                swap(W[j],W[j+1]);
                swap(obj[j],obj[j+1]);
            }
        }
    }
    cout<<"Ratio of objects after sorting are -";
    for(int i=1;i<=n;i++)
    {
        cout<<R[i]<<" ";
    }
    cout<<endl;
    cout<<"profit of objects after sorting are -";
    for(int i=1;i<=n;i++)
    {
        cout<<P[i]<<" ";
    }
    cout<<endl;
    cout<<"Weight of objects after sorting are -";
    for(int i=1;i<=n;i++)
    {
        cout<<W[i]<<" ";
    }
    cout<<endl;
    cout<<"objects after sorting are -";
    for(int i=1;i<=n;i++)
    {
        cout<<obj[i]<<" ";
    }
    cout<<endl;

    //^ finding the solution
    float prof=0;
    for(int i=1;i<=n;i++)
    {
        if(M>0 && W[i]<M)
        {
            M=M-W[i];
            prof=prof+P[i];
        }
        else if (M>0)
        {
            prof=prof+(P[i]*(M/W[i]));
            break;
        }
    }
    cout<<"final answer is"<<prof;
    // if (M>0)
    // {
    //     prof=prof+(P[i](M/W[i]));
    // }

    




}