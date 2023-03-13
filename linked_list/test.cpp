#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
}*first=NULL;

void create(int A[],int N)
{
    int i;
    struct Node *t,*last ; //the last pointer helps to join the new node to the previous node
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<=N;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int COUNT(struct Node*p)
{
    int count=0;
    while(p->next!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

void Display(struct Node *p)
{
    
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    create(arr,n);
    int a;
    a=COUNT(first);
    cout<<a;
    int K;
    cout<<"enter value of K";
    cin>>K;

}