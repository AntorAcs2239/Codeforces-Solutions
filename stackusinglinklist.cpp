#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *first=NULL;
void push(int data)
{
    node *tem;
    tem=new node();
    if(tem==NULL)
    {
        cout<<"OVERFLOW"<<endl;
    }
    else
    {
        tem->data=data;
        tem->next=first;
        first=tem;
    }
}
void pop()
{
    if(first==NULL)
    {
        cout<<"UNDERFLOW"<<endl;
    }
    else 
    {
        first=first->next;
        delete first;
    }
}
bool isempty()
{
    if(first==NULL)return true;
    return false;
}
int top()
{
    if(!isempty())return first->data;
    else exit(1);
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
int main()
{
    // push(10);
    // push(20);
    // push(30);
    // push(40);
    // pop();
    //cout<<top()<<endl;
    //display();
    return 0;
}