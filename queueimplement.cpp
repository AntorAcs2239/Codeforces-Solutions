#include<iostream>
using namespace std;
class queuee
{
    public:
    int front,rare,si;
    int *qu;
    queuee(int si)
    {
        front=rare=-1;
        this->si=si;
        qu=new int [si];
    }
    void enqueue(int value);
    void dequeue();
    void display();
};
void queuee::enqueue(int value)
{
    if((front==0&&rare==si-1)||(rare=(front-1)%(si-1)))
    {
        cout<<"OVERFLOW"<<endl;
    }
    else if(front==-1)
    {
        front=rare=0;
        qu[rare]=value;
    }
    else if(rare==si-1&&front!=0)
    {
        rare=0;
        qu[rare]=value;
    }
    else 
    {
        rare++;
        qu[rare]=value;
    }
}
void queuee::dequeue()
{
    if(front==-1)
    {
        cout<<"UNDERFLOW"<<endl;
    }
    else
    {
        int value=qu[front];
        cout<<"Deleted Value"<<value<<endl;
        if(front==rare)
        {
            front=rare=-1;
        }
        else if(front==si-1)
        {
            front=0;
        }
        else 
        {
            front++;
        }
    }
}
void queuee::display()
{
    if(front==-1)
    {
        cout<<"NO ITEM"<<endl;
    }
    else if(rare>=front)
    {
        for(int i=front;i<=rare;i++)cout<<qu[i]<<" ";
    }
    else 
    {
        for(int i=front;i<si;i++)cout<<qu[i]<<" ";
        for(int i=0;i<=rare;i++)cout<<qu[i]<<" ";
    }
}
int main()
{
    int si;
    cin>>si;
    queuee qu(si);
    while(1)
    {
        cout<<"\n1 for enqueue \n2 for dequeue\n3 for display\n4 for exit"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
        case 1:
            int value;
            cin>>value;
            qu.enqueue(value);
            break;
        case 2:
            qu.dequeue();
            break;
        case 3:
            qu.display();
            break;
        case 4:
            goto endd;
            break;
        }
    }
    endd:
    return 0;
}