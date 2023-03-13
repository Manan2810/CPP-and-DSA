#include<iostream>
#include<vector>
using namespace std;

//! Memoization
// space complexity O(n)->O(n)+O(n)
int fibonacci(int N,vector<int> &DP)
{
    // base case
    if (N<=1)
    {
        return N;
    }
    if (DP[N]!= -1)
    {
        return DP[N];
    }
    DP[N] = fibonacci(N-1,DP)+ fibonacci(N-2,DP);
    return DP[N];
}

int main()
{
    int n;
    cout<<"enter the position of fibonacci element";
    cin>>n;
    vector<int> DP(n+1);
    for(int i=0;i<=n;i++)
    {
        DP[i] = -1;
    }
    cout<<fibonacci(n,DP);
    return 0;

}

// !tabulation
// space complexity O(n)
int main()
{
    int n;
    cout<<"enter the position of fibonacci element";
    cin>>n;
    // step 1 creating a DP array
    vector<int> DP(n+1);
    
    // step 2 initializing the base case in dp array
    DP[0]=0;
    DP[1]=1;

    // step 3
    for(int i=2;i<=n;i++)
    {
        DP[i]=DP[i-1]+DP[i-2];
    }

    cout<<DP[n];
    return 0;

}

// !optimal space comlexity
// space complexity O(1)
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int prev2=0;
    int prev1=1;
    int curr;

    if (n==0)
    {
        cout<<prev2;
    }

    for(int i=2;i<=n;i++)
    {
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
        
    }

    cout<<prev1<<endl;
}