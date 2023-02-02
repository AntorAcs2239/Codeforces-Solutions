#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
void solve()
{
   int n;
   cin>>n;
   int ar[n+1];
   int br[n+1];
   for(int i=1;i<=n;i++)
   {
       cin>>ar[i];
   }
   for(int i=1;i<=n;i++)
   {
       cin>>br[i];
   }
   int idx;
   for(int i=1;i<=n;i++)
   {
       if(ar[i]<br[i])
       {
           cout<<"0"<<endl;
           return;
       }
       else
       {
           idx=i;
           break;
       }
   }
   int x=ar[idx];
   int y=br[idx];
   int ans=INT_MAX;
   int t1,t2;
   for(int i=idx+1;i<=n;i++)
   {
       if(ar[i]<y)
       {
           t1=i-idx;
           ans=min(t1,ans);
       }
       if(br[i]>x)
       {
           t2=i-idx;
           ans=min(t2,ans);
       }
   }
   cout<<ans<<endl;
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
    //solve();
    return 0;
}