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
   int a;
   cin>>a;
   int ar[a];
   for(int i=0;i<a;i++)cin>>ar[i];
   sort(ar,ar+a);
   for(int i=1;i<=a;i++)
   {
       if(ar[i-1]!=i)
       {
           cout<<"No"<<endl;
           return;
       }
   }
   cout<<"Yes"<<endl;
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