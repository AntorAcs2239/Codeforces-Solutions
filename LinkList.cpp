#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *first=NULL;
node *last=NULL;
void InsertFirst(int data)
{
    node *tem;
    if(first==NULL)
    {
        tem=new node();
        tem->data=data; 
        tem->next=first;
        first=tem;
        last=first;
    }
    else 
    {
        tem=new node();
        tem->data=data;
        tem->next=first;
        first=tem;
    }
}
void InsertLast(int data)
{
    node *tem=first,*newnode;
    if(first==NULL)
    {
         newnode=new node();
         newnode->data=data;
         newnode->next=NULL;
         tem=newnode;
         first=tem;
         last=first;
         return;
    }
    // while (tem->next!=NULL)
    // {
    //    tem=tem->next;
    // }
    newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    last->next=newnode;
    last=newnode;
    // tem->next=newnode;
    // tem=newnode;
}
int ListSize()
{
     node *tem=first;
     int size=0;
    while (tem!=NULL)
    {
       size++;
        tem=tem->next;
    }
    return size;
}
void InsertAnyPosition(int position,int data)
{
    node *tem=first;
    if(position==1)
    {
         if(first==NULL)
       {
        tem=new node();
        tem->data=data;
        tem->next=first;
        first=tem;
        last=first;
       }
         else 
       {
        tem=new node();
        tem->data=data;
        tem->next=first;
        first=tem;
       }
    }
   else if(position>=1&&position<=ListSize()+1)
    {
        for(int i=1;i<position-1;i++)tem=tem->next;
        node *newnode=new node();
        newnode->data=data;
        newnode->next=tem->next;
        tem->next=newnode;
        tem=newnode;
    }
    else cout<<"Invalid Position"<<endl;
}
bool Search(int data)
{
    node *tem=first;
    while(tem!=NULL)
    {
        if(tem->data==data)
        {
            return true;
        }
        tem=tem->next;
    }
    return false;
}
void DeleteData(int data)
{
    if(Search(data))
    {
        node *tem,*tail;
        tem=first;
        tail=0;
        while (tem->data!=data)
        {
            tail=tem;
            tem=tem->next;
        }
        tail->next=tem->next;
        delete tem;
    }
    else 
    {
        cout<<"Data is not present"<<endl;
    }
}
void DeletePosition(int positon)
{
    if(positon>=1&&positon<=ListSize())
    {
        node *tem=first;
        if(positon==1)
        {
            first=first->next;
            delete tem;
        }
        else 
        {
            node *tail=0;
            for(int i=1;i<positon;i++)
            {
                tail=tem;
                tem=tem->next;
            }
            tail->next=tem->next;
            delete tem;
        }
    }
    else
    {
        cout<<"Invalid Position"<<endl;
    }
}
void display()
{
    node *tem=first;
    while (tem!=NULL)
    {
        cout<<tem->data<<endl;
        tem=tem->next;
    }
}
void Display_Left_to_Right_Recursively(node *tem)
{
    if(tem!=NULL)
    {
        cout<<tem->data<<endl;
        Display_Left_to_Right_Recursively(tem->next);
    }
}
void Display_Right_to_Left_Recursively(node *tem)
{
    if(tem!=NULL)
    {
        Display_Right_to_Left_Recursively(tem->next);
        cout<<tem->data<<endl;
    }
}
void ReverseByElement()
{
    int ar[ListSize()];
    node *tem=first;
    int i=0;
    while (tem!=NULL)
    {
        ar[i]=tem->data;
        tem=tem->next;
        i++;
    }
    i--;
    tem=first;
    while (tem!=NULL)
    {
        tem->data=ar[i];
        tem=tem->next;
        i--;
    }
}
void ReverseByLink()
{
    node *t1,*t2,*tem;
    tem=first;
    t1=0;
    t2=0;
    while (tem!=NULL)
    {
        t2=t1;
        t1=tem;
        tem=tem->next;
        t1->next=t2;
    }
    first=t1;
}
int main()
{
    InsertFirst(10);
    InsertFirst(20);
    InsertFirst(30);
    InsertFirst(40);
    InsertFirst(50);
    InsertFirst(60);

    Display_Left_to_Right_Recursively(first);
    return 0;
}