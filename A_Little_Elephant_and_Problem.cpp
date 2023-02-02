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
    int n;
    cin>>n;
    ll ar[n+1];
    ll br[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        br[i]=ar[i];
    }
    sort(br+1,br+n+1);
    ll fault=0;
    for(int i=1;i<=n;i++)
    {
        if(ar[i]!=br[i])
        {
            fault++;
        }
    }
    if(fault<=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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