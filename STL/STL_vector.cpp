#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; //vector 1
    cout<<"total memory allocated to the vector :- "<<v.capacity()<<endl;
    cout<<"size of vector v is "<<v.size()<<endl;
   
    //inserting an element in vector v 
    v.push_back(1);
    cout<<"total memory allocated to the vector :- "<<v.capacity()<<endl;
    cout<<"size of vector v is "<<v.size()<<endl;
    v.push_back(2);
    cout<<"total memory allocated to the vector :- "<<v.capacity()<<endl;
    cout<<"size of vector v is "<<v.size()<<endl;
    v.push_back(3);
    cout<<"total memory allocated to the vector :- "<<v.capacity()<<endl;
    cout<<"size of vector v is "<<v.size()<<endl;
    //here we noticed that the vector doubles up its size if it runs short of space.

    cout<<"element at index 2 "<<v.at(2)<<endl;

    //printing the elements of the vector before popping
    int size=v.size();
    cout<<"printing elements before poping"<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }

    //priting the elements of the vector after popping
    cout<<"printing elements after poping"<<endl;
    v.pop_back();
    for(int i:v)
    {
        cout<<i<<endl;
    }

    // //size before clearing the vector
    // cout<<v.size()<<endl;
    
    // //size after clearing the vecotr
    // v.clear();
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    //copying elements of vector 1 to vector 2
    vector<int> arr(v); //vector 2 is arr and all elements of vector 2 
    cout<<"printing elements of vector 2"<<endl;
    for(int i : arr)
    {
        cout<<i<<endl;
    }

}