#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>visited(200005,0);
vector<int>paren(200005,0);
void solve()
{
   ll n,k;
   cin>>n>>k;
   ll ar[n+1];
   ll br[n+1];
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
       br[i]=ar[i];
   }
   vector<ll>vec;
   map<ll,ll>mp;
   sort(br,br+n);
   for(int i=0;i<n;i++)
   {
       mp[br[i]]=i+1;
   }
   for(int i=0;i<n;i++)
   {
       vec.push_back(mp[ar[i]]);
   }
   int count=0;
   vec.push_back(LLONG_MIN);
   int s=0;
   for(int i=0;i<n;i++)
   {
       if(vec[i]==vec[i+1]-1)
       {
           count++;
       }
       else 
       {
           s++;
           count=0;
       }
   }
   if(count>0)s++;
   if(k>=s)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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