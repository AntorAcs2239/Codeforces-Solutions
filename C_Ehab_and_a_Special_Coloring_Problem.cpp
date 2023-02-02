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
    ll ar[n+1];
    for(int i=2;i<=n;i++)
    {
        ar[i]=i;
    }
    for(int i=2;i<=n;i+=2)ar[i]=1;
    ll t=2;
    for(ll i=3;i<=n;i+=2)
    {
        if(ar[i]==i)
        {
            ar[i]=t;
            for(ll j=i*i;j<=n;j+=i)
           {
               ar[j]=t;
           }
           t++;
        }
    }
    for(int i=2;i<=n;i++)
    {
        cout<<ar[i]<<" ";
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