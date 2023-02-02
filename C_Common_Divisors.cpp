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
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    ll gcdd=ar[0];
    for(int i=1;i<n;i++)gcdd=gcd(gcdd,ar[i]);
    int ans=0;
    for(int i=1;i<=sqrt(gcdd);i++)
    {
        if(gcdd%i==0)
        {
            if(gcdd/i==i)ans++;
            else ans+=2;
        }
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