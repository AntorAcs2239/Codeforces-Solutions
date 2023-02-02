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
   ll n;
   cin>>n;
   ll x,y;
   cin>>x>>y;
   vector<pair<int,int>>vec;
   vector<pair<int,int>>vec2;
   for(int i=1;i<=n;i++)
   {
       int a,b;
       cin>>a>>b;
       vec.push_back(make_pair(a,b));
       vec2.push_back(make_pair(b,a));
   }
   sort(vec.begin(),vec.end(),greater<pair<int,int>>());
   sort(vec2.begin(),vec2.end(),greater<pair<int,int>>());
   int ans1=INT_MAX;
   int ans2=INT_MAX;
   int x1=0,y1=0;
   int count=0;
   for(int i=0;i<n;i++)
   {
       count++;
       x1+=vec[i].first;
       y1+=vec[i].second;
       if(x1>=x&&y1>=y)
       {
           ans1=min(ans1,count);
           break;
       }
   }
   x1=0,y1=0;
   count=0;
   for(int i=0;i<n;i++)
   {
       count++;
       x1+=vec2[i].second;
       y1+=vec2[i].first;
       if(x1>=x&&y1>=y)
       {
           ans2=min(ans2,count);
           break;
       }
   }
   int t=min(ans1,ans2);
   if(t==INT_MAX)cout<<"-1"<<endl;
   else cout<<t<<endl;
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