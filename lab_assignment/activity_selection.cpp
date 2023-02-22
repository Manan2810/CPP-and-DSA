#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"enter the number of activities ";
    cin>>N;
    int Activity[N];
    int Start[N];
    int Finish[N];

    // cout<<"enter the Activity"<<endl;
    for(int i=1;i<=N;i++)
    {
        Activity[i]=i;
    }
    cout<<"enter the start time"<<endl;
    for(int i=1;i<=N;i++)
    {
        cin>>Start[i];
    }
    cout<<endl;
    cout<<"enter the finish time"<<endl;
    for(int i=1;i<=N;i++)
    {
        cin>>Finish[i];
    }

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++)
        {
            if(Finish[j]>Finish[j+1])
            {
                swap(Activity[j],Activity[j+1]);
                swap(Start[j],Start[j+1]);
                swap(Finish[j],Finish[j+1]);
            }
        }
    }
    cout<<"Activity after sorting"<<endl;
    for(int i=1;i<=N;i++)
    {
        cout<<Activity[i]<<" ";
    }
    cout<<endl;
    cout<<"Start time after sorting"<<endl;
    for(int i=1;i<=N;i++)
    {
        cout<<Start[i]<<" ";
    }
    cout<<endl;
    cout<<"Finish time after sorting"<<endl;
    for(int i=1;i<=N;i++)
    {
        cout<<Finish[i]<<" ";
    }
    cout<<endl;
   int m,o;
    // ^ problem solution
     m = 1;
    cout << m << " ";
 
    // Consider rest of the activities
    for (o = 2; o <= N; o++) 
    {
        // If this activity has start time greater than or
        // equal to the finish time of previously selected
        // activity, then select it
        if (Start[o] >= Finish[m])
        {

            cout << o << " ";
            cout<<Start[o]<<" "<<Finish[o];
            m = o;
        }
    }


}