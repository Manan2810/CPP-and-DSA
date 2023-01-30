#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<"size of the array 'a' is "<<size<<endl;
    //printig elements of the array
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    //printing element at index 2
    cout<<"element at index 2 is :- "<<a.at(2);
    cout<<endl;
    //check whether a given array is empty or not??
    cout<<"array empty or not ? "<<a.empty();
    //printing the first and last element of the array
    cout<<"first element "<<a.front()<<endl;
    cout<<"last element ? "<<a.back();
}