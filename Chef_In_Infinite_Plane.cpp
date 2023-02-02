#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
       cin>>ar[i];
        mp[ar[i]]++;
    }
    int ans=0;
    for(auto a:mp)
    {
        int t=a.first-1;
        ans+=min(a.second,t);
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
   // solve();
    return 0;
}