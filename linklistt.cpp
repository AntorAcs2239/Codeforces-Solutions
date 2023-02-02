#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int v)
    {
       data=v;
       next=NULL;
    }
};
node *head=NULL;
node *tail=NULL;
void insertAthead(int v)
{
    node *n=new node(v);
    n->next=head;
    head=n;
}
void insertAttail(int v)
{
    node *n=new node(v);
    tail->next=n;
    tail=n;
}
int countt()
{
    int c=0;
    node *tem=head;
    while (tem!=NULL)
    {
       // cout<<tem->data<<" ";
        tem=tem->next;
        c++;
    }
    return c;
}
void insertAtAnyPosition(int v,int p)
{
    if(p==1)
    {
        if(head==NULL)
        {
             node *n=new node(v);
             head=n;
             tail=n;
        }
        else insertAthead(v);
        return;
    }
    if(countt()==p-1)
    {
        insertAttail(v);
        return;
    }
    else 
    {
        node *tem=head;
        for(int i=1;i<p-1;i++)
        {
            tem=tem->next;
        }
        node *n=new node(v);
        n->next=tem->next;
        tem->next=n;
    }
}
void deletee(int p)
{
    if(p==1)
    {
        if(head!=NULL)
        {
            head=head->next;
        }
        else cout<<"NO data"<<endl;
        return;
    }
    if(p>countt())
    {
        cout<<"Overflow"<<endl;
        return;
    }
    node *tem=head;
    node *tem2=tem->next;
    for(int i=1;i<p-1;i++)
    {
        tem=tem->next;
        tem2=tem->next;
    }
    tem->next=tem2->next;
    tem=tem2->next;
}
void display()
{
    node *tem=head;
    while (tem!=NULL)
    {
        cout<<tem->data<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void reverseprint(node *tem)
{
    if(tem==NULL)return;
    reverse(tem->next);
    cout<<tem->data<<" ";
}
int main()
{
    insertAtAnyPosition(10,1);
    insertAtAnyPosition(20,2);
    insertAtAnyPosition(30,3);
    insertAtAnyPosition(40,4);
    insertAtAnyPosition(50,5);
    deletee(5);
    display();
   // reverse(head);
    return 0;
}