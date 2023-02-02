#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<int>vec[200005];
void solve()
{
   int n,m;
   cin>>n>>m;
   vec->clear();
   while(m--)
   {
       int u,v;
       cin>>u>>v;
       vec[u].push_back(v);
   }
   int loss;
   bool flag=false;
   for(int i=1;i<=n;i++)
   {
       if(vec[i].size()<(n-1))
       {
           flag=true;
           loss=i;
           break;
       }
   }
   if(flag)
   {
       cout<<"NO"<<endl;
       map<int,int>mp;
       mp[loss]=1;
       for(auto a:vec[loss])mp[a]=1;
       for(int i=1;i<=n;i++)
       {
           if(mp[i]==0)
           {
               cout<<loss<<" "<<i<<endl;
               break;
           }
       }
   }
   else 
   {
       cout<<"YES"<<endl;
   }
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
    return 0;
}