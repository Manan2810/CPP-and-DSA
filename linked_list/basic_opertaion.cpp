#include<iostream>
using namespace std;

struct Node{
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

void display(struct Node *p)
{
    while(p->next!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int count(struct Node *p)
{
    int count=0;
    while(p->next!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

int sum(struct Node *p)
{
    int sum=0;
    while(p->next!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

void insert(struct Node *p,int pos)
{
    struct Node *q=new Node;
    struct Node *m=first;
    cout<<"enter data of q"<<endl;
    cin>>q->data;
    q->next=NULL;
    if(pos==1)
    {
        q->next=p;
        p=q;

    }
    else if(pos>1)
    {
        for(int i=0;i<pos-2;i++)
        {
            m=m->next;
        }
        q->next=m->next;
        m->next=q;

    }
}

void Delete_from_firstPosition(struct Node*p)
{
    struct Node*q=first;
    first=first->next;
    delete(q);

}



int Search(struct Node*p,int k)
{
    // struct Node*q=p;
    while(p->next!=NULL)
    {
        if(p->data==k)
        {
            return 1;
        }
        p=p->next;
    }
    return 0;

}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    create(arr,n);
    display(first);
    // cout<<"total number of elements are-";
    // int c=count(first);
    // cout<<c<<endl;
    // int s=sum(first);
    // cout<<"sum is "<<s;
    // cout<<endl;
    // int N;
    // cout<<"enter value of position u want to enter"<<endl;
    // cin>>N;
    // insert(first,N);
    // display(first);
    // int N1;
    // cout<<"enter value of position u want to enter"<<endl;
    // cin>>N1;
    Delete_from_firstPosition(first);
    display(first);
    int key;
    cout<<"enter u want to find in linked list"<<endl;
    cin>>key;
    int a;
    a=Search(first,key);
    if (a==1){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}