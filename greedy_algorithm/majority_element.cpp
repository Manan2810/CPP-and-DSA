// ~ problem statement 
/* Given an array of size N, find the majority element. The majority element is the element that appears
more than floor(N/2) times. You may assume that the array is non-empty and the majority element 
always exist in the array.
Example Input
A = [2, 1, 2]
Example Output
2
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"enter size of the array ";
    cin>>N;
    int Arr[N];
    cout<<"enter elements in the Arr"<<endl;
    for(int i=1;i<=N;i++)
    {
        cin>>Arr[i];
    }
    // hash table
    int H[N];
    for(int i=1;i<=N;i++)
    {
        H[i]=0;
    }
    // ^ solution part 
    for(int i=1;i<=N;i++)
    {
        H[Arr[i]]++;
    }

    for(int i=1;i<=N;i++)
    {
        if(H[i]>0)
        cout<<i<<" "<<H[i]<<endl;
    }
    cout<<endl;

    int condition=N/2;

    for(int i=1;i<=N;i++)
    {
        if(H[i]>condition)
        {
            cout<<"majority element is"<<i;
        }
    }
    

}
