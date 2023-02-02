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
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   vector<int>vec[n+1];
   map<int,int>mp;
   map<int,int>index;
   int tem[6]={4,8,15,16,23,42};
   for(int i=0;i<6;i++)index[tem[i]]=i;
   int ans=0;
    for(int i=0;i<n;i++)
   {
       if(ar[i]==4)
       {
             vec[mp[ar[i]]].push_back(ar[i]);
             mp[ar[i]]++;
       }
       else 
       {
            int t=index[ar[i]];
           int v=-100;
           if(vec[mp[ar[i]]].size()>0)
           {
               v=vec[mp[ar[i]]].back();
           }
           if(tem[t-1]==v)
           {
                 vec[mp[ar[i]]].push_back(ar[i]);
                 mp[ar[i]]++;
           }
            else ans++;
       }
   }
   int c=0;
   for(auto a:vec)
   {
       auto x=a;
       if(x.size()<6)ans+=x.size();
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
    return 0;
}