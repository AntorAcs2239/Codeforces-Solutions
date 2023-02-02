#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
int br[200005];
void solve()
{
   int n;
   cin>>n;
   int ar[n+1];
   for(int i=1;i<=n;i++)cin>>ar[i];
   for(int i=n;i>=1;i--)
   {
       int c=0;
       for(int j=2*i;j<=n;j+=i)
       {
         c+=br[j];
       }
       if(c%2!=ar[i])br[i]=1;
   }
   vector<int>ans;
   for(int i=1;i<=n;i++)
   {
       if(br[i]==1)
       {
           ans.push_back(i);
       }
   }
   cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
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