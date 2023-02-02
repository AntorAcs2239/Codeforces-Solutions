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
    double a,b;
    cin>>a>>b;
    cout<<(b*a)/100<<endl;
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