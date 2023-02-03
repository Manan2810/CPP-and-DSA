//list-implementation done using concepts of doubly linked list
#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
    list<int> l;
    cout<<endl;

    //inserting element in the list
    l.push_back(2);
    l.push_front(1);
    l.push_back(3);
    l.push_back(4);
    for(int i:l)
    {
        cout<<i<<endl;
    }
    cout<<"size of the list "<<l.size()<<endl;

    cout<<endl;

    //deleting element from the list
    l.pop_back();
    for(int i:l)
    {
        cout<<i<<endl;
    }
    cout<<"size of the list"<<l.size()<<endl;

    //deleting more than one element from the list
    l.erase(l.begin());
    for(int i:l)
    {
        cout<<i<<endl;
    }
    cout<<"size of the list"<<l.size()<<endl;

    //initialization method 2
    list<int> n(5,100); //list 2
    for(int i:n)
    {
        cout<<i<<endl;
    }

    //entering multiple values in a list using for loop
    int n;
    cin>>n;
    list<int> m;
    cout<<m.max_size();
    list<int> u;
    for(int i=1;i<=n;i++)
    {
        m.push_back(i*2);
        u.push_front(i*3);
    }
    cout<<endl;
    
}