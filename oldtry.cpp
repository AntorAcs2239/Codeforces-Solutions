#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
   int n,x;
   cin>>n>>x;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   sort(ar,ar+n);
   int tem=0;
   int ans=0;
   for(int i=0;i<n;i++)
   {
       tem+=ar[i];
       if(tem>x)break;
       ans++;
   }
   cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
}