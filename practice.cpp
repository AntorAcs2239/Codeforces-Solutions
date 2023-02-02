#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    int a,b,c;
    void set(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void get()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    class nested
    {
        public:
        void display()
        {
            cout<<"nested class"<<endl;
        }
    };
};
int main()
{
    A a;
   A::nested obj;
   obj.display();
   a.
    return 0;
}