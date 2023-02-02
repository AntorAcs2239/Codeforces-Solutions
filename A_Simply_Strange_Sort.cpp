#include<bits/stdc++.h>
using namespace std;
bool s(int ar[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(ar[i]!=i)return false;
    }
    return true;
}
void solve()
{
   int n;
   cin>>n;
   int a[n+1];
   for(int i=1;i<=n;i++)cin>>a[i];
   int tem=0;
   for(int x=1;;x++)
   {
       if(x%2==1)
       {
           if(s(a,n))
           {
               cout<<tem<<endl;
               return;
           }
           for(int i=1;i<=n-2;i+=2)
           {
               if(a[i]>a[i+1])swap(a[i],a[i+1]);
           }
       }
       else 
       {
           if(s(a,n))
           {
               cout<<tem<<endl;
               return;
           }
           for(int i=2;i<=n-1;i+=2)
           {
               if(a[i]>a[i+1])swap(a[i],a[i+1]);
           }
       }
       tem++;
   }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}