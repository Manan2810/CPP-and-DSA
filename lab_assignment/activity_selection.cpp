//activity selectipn question
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input the number of activities ";
    cin>>n;
    char N;
    float start[100];
    float end[100];
    int count=1;
    int counting[100];
    int i=1;

    cout<<"enter the starting and ending time of the activity"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"starting time of activity "<<i<<" ";
        cin>>start[i];
        cout<<"ending time of activity "<<i<<" ";
        cin>>end[i];
    }

    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=i+1;j<=n;j++)
    //     {
    //         if(end[i]<=end[j])
    //         {
    //             cout<<"activity can be scheduled";
    //             ++count;
    //             cin>>counting[i];

    //         }
    //         else{
    //             cout<<"activities cannot be scheuled";
    //         }
    //     }
    // }







    do
    {
       if(i>1)
       {
        for(int i=1;i<=n;i++)
            {
                for(int j=i+1;j<=n;j++)
                {
                    if(end[i]<=start[j])
                    {
                        cout<<"activity can be scheduled"<<endl;
                        ++count;
                        counting[i]=count;

                    }
                    else{
                        cout<<"activities cannot be scheuled"<<endl;
                    }
                }
            }
       }
       else{
        cout<<"activity can be scheduled"<<endl;
       }
       i++;
       count=1;
        
        cout<<"do you want to enter more activities ";
        cin>>N;
    }while((N=='y'|| N=='Y')&& i<=n);

    for(int i;i<=n;i++)
    {
        cout<<counting[i]<<endl;
    }
}
