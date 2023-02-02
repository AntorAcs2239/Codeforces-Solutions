#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
string bin(int n,int l)
{
    string tem;
    int k,c;
     for (c = l; c >= 0; c--)
    {
    k = n >> c;

    if (k & 1)
      tem+='1';
    else
      tem+='0';
   }
   return tem;
}
void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x%3]++;
    }
    int ans=0;
    ans+=mp[0];
    int t=min(mp[1],mp[2]);
    ans+=t;
    mp[1]-=t;
    mp[2]-=t;
    ans+=mp[1]/3;
    ans+=mp[2]/3;
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
   // solve();
    return 0;
}