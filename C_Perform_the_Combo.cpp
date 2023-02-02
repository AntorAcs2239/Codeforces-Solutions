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
   int n,m;
   cin>>n>>m;
   int suf[n+1];
   for(int i=0;i<=n;i++)suf[i]=0;
   string a;
   cin>>a;
   for(int i=0;i<m;i++)
   {
       int x;
       cin>>x;
       suf[x-1]++;
   }
   int t=0;
   for(int i=n-1;i>=0;i--)
   {
       t+=suf[i];
       suf[i]=t;
   }
   map<char,int>mp;
   for(int i=n-1;i>=0;i--)
   {
       mp[a[i]]+=suf[i]+1;
   }
   for(char i='a';i<='z';i++)
   {
       cout<<mp[i]<<" ";
   }
   cout<<endl;
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
   // solve();
    return 0;
}