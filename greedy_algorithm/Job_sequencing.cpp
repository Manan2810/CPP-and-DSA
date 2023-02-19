#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of jobs";
    cin>>n;
    int Jobs[n];
    // ^entering job number
    for(int i=1;i<=n;i++)
    {
        Jobs[i]=i;
    }
    cout<<"the jobs are as follows"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"J"<<Jobs[i]<<" ";
    }
    cout<<endl;
    int profit[n];
    cout<<"enter profit of each job"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>profit[i];
    }
    cout<<"profit of each job"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<profit[i]<<" ";
    }
    cout<<endl;
    int Deadline[n];
    cout<<"enter the Deadline of each job"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>Deadline[i];
    }
    cout<<"profit of each job"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<Deadline[i]<<" ";
    }
    cout<<endl;
    // ^finding maximum deadline
    int max_deadline=-1;
    for(int i=1;i<=n;i++)
    {
        if(max_deadline<Deadline[i])
        {
            max_deadline=Deadline[i];
        }
    }
    cout<<"maximum Deadline is"<<max_deadline;
    cout<<endl;
    
    //sorting the jobs, profit and deadline
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(profit[j]<profit[j+1])
            {
                swap(Jobs[j],Jobs[j+1]);
                swap(profit[j],profit[j+1]);
                swap(Deadline[j],Deadline[j+1]);
            }
        }
    }
    cout<<"Jobs of objects after sorting are -";
    for(int i=1;i<=n;i++)
    {
        cout<<Jobs[i]<<" ";
    }
    cout<<endl;
    cout<<"profit of objects after sorting are -";
    for(int i=1;i<=n;i++)
    {
        cout<<profit[i]<<" ";
    }
    cout<<endl;
    cout<<"deadline of objects after sorting are -";
    for(int i=1;i<=n;i++)
    {
        cout<<Deadline[i]<<" ";
    }
    cout<<endl;

    //problem statement solution
    bool slot[max_deadline];
    int result[n];
    int P=0;
    //initialising all the slots to be free
    for(int i=1;i<=max_deadline;i++)
    {
        slot[i]=false;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=min(max_deadline,Deadline[i]);j>=1;j--)
        {
            if(slot[j]==false)
            {
                result[i]=Jobs[i];
                slot[j]=true;
                P=P+profit[i];
                break;
            }
        }
    }
    cout<<"final profit="<<P;
}