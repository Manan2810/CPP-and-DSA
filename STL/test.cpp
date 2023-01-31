#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5,1);
    for(int i:v)
    {
        cout<<i<<endl;
    }
    cout<<"few changes made"<<endl;
    v.at(2)=3;
    for(int i:v)
    {
        cout<<i<<endl;
    }
}
