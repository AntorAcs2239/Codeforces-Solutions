#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    virtual void display()
    {
        cout<<"class A"<<endl;
    }
};
class child:public A
{
    public:
    void display()
    {
       cout<<"class child"<<endl;
    }
};
int main()
{
   A a;
   child ch;
   a=&ch;
   a->display();
}








































