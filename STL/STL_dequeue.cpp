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

    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<endl;
    }
}
