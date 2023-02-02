#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
int binarysearch(int ar[],int n,int x)
{
   int low=0;
   int high=n-1;
   int mid;
   while (low<high)
   {
       mid=(low+high)/2;
       if((x-ar[mid])>0)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
   return mid;
}
void solve()
{
   ll a,b,c;
   cin>>a>>b>>c;
   if(a>=0&&b>=0)
   {
       if(a>b)
       {
           cout<<">"<<endl;
       }
       else if(b>a)cout<<"<"<<endl;
       else cout<<"="<<endl;
   }
   else if(a<0&&b<0)
   {
       if(c%2==0)
       {
           if(a>b)cout<<"<"<<endl;
           else if(b>a)cout<<">"<<endl;
           else cout<<"="<<endl;
       }
       else 
       {
           if(a>b)
       {
           cout<<">"<<endl;
       }
       else if(b>a)cout<<"<"<<endl;
       else cout<<"="<<endl;
       }
   }
   else if(a<0)
   {
       if(c%2==0)
       {
           if(abs(a)>b)cout<<">"<<endl;
           else if(b>abs(a))cout<<"<"<<endl;
           else cout<<"="<<endl;
       }
       else 
       {
          cout<<"<"<<endl;
       }
   }
   else 
   {
       if(c%2==0)
       {
           if(a>abs(b))cout<<">"<<endl;
           else if(abs(b)>a)cout<<"<"<<endl;
           else cout<<"="<<endl;
       }
       else 
       {
          cout<<">"<<endl;
       }
   }
}
int main()
{
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
}