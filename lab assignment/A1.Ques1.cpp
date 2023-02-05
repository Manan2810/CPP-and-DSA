//menu driven program executing different functions on arrays:-

#include<iostream>
using namespace std;

void Create(int arr[],int N)
{
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"array is created"<<endl;

}

void Display(int arr[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

void Insert(int arr[],int N,int key,int index)
{
    for(int i=0;i<N;i++)
    {
        if(i==index)
        {
            arr[i+1]=arr[i];
            arr[i]=key;
            N++;
        }
    }
}

int  Delete(int arr[],int N,int pos)
{
    for(int i=pos;i<N;i++)
    {
        int temp;
        temp=arr[pos];
        arr[i]=arr[i+1];
        N--;
    }
    return arr;
    
}

void Search(int arr[],int N,int key)
{
    for(int i=0;i<N;i++)
     { 
        if(arr[i]==key)
        {
            cout<<"element found at index"<<i<<endl;
        }
        continue;
        
     }
}


int main()
{
    int x;
    cout<<"enter size of the array";
    cin>>x;
    int Arr[100];
    cout<<"<----------------------Main Menu------------------------->"<<endl;
    char n;
    do
    {
        cout<<endl;
        cout<<"choice 1 - Create "<<endl;
        cout<<"choice 2 - Display "<<endl;
        cout<<"choice 3 - Insert "<<endl;
        cout<<"choice 4 - Delete "<<endl;
        cout<<"choice 5 - Search "<<endl;
        cout<<"choice 6 - Exit "<<endl;
        cout<<endl;
        int choice;
        cout<<"enter the choice number(1-5) ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1:
            Create(Arr,x);
            break;
            case 2:
            Display(Arr,x);
            break;
            case 3:
            int index;
            cout<<"enter index u want to enter the element";
            cin>>index;
            int key;
            cout<<"enter element u want to enter at the index";
            cin>>key;
            Insert(Arr,x,key,index);
            break;
            case 4:
            int position;
            cout<<"enter position from where you want to delete the element";
            cin>>position;
            Delete(Arr,x,position);
            break;
            case 5:
            int Key;
            cout<<"enter element you want to find ";
            cin>>key;
            Search(Arr,x,Key);
            break;
            default :
            cout<<"wrong option";
            break;

        }
        cout<<"do you want to continue ? ";
        cin>>n;

    }while(n=='y'||n=='Y' );
}