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
   string s1,s2;
   int n;
   cin>>n;
   cin>>s1>>s2;
   map<int,int>mp;
   ll ans=0;
   for(int i=0;i<n;i++)
   {
       if(s1[i]!=s2[i])
       {
           ans+=2;
           mp[i]=1;
       }
   }
   for(int i=0;i<n-1;i++)
   {
       if((mp[i]==0)&&(mp[i+1]==0))
       {
           if(s1[i]!=s1[i+1])
           {
               ans+=2;
               mp[i]=1;
               mp[i+1]=1;
           }
       }
   }

   for(int i=0;i<n;i++)
   {
       if(mp[i]==0)
       {
           if((s1[i]==s2[i])&&(s1[i]=='0'))
           {
               ans++;
               mp[i]=1;
           }
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
    return 0;
}