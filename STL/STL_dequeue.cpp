#include<iostream>
#include<deque>
using namespace std;
int main()
{
    //creating a deque
    deque<int> d;
    //inserting elements in a dequeue
    d.push_back(1); //inserting element from the end
    d.push_front(0); //inserting element from beginning
    cout<<"max size is "<<d.max_size()<<endl;

    for(int i:d)
    {
        cout<<i<<endl;
    }
    //after removing an element from the end
    cout<<endl;
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<endl;
    }

    cout<<endl;

    d.push_front(2);
    d.push_back(1);
    for(int i:d)
    {
        cout<<i<<endl;
    }

    //deleting element from front
    d.pop_front();
    cout<<endl;
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    //check deque empty or not
    cout<<"deque empty or not"<<d.empty()<<endl;
    //printing first and last elements
    cout<<"first element is "<<d.front()<<" and last element is "<<d.back()<<endl;

    //erase function(here we have to give a range from one point to another)
    cout<<"the size of deque before erasing "<<d.size()<<endl;
    d.erase(d.begin(),d.end());
    cout<<"the size of deque after earsing "<<d.size()<<endl;

    //max size of deque 
    cout<<"max size of the array"<<d.max_size()<<endl;//max size after remains the same from starting to ending

    
}
