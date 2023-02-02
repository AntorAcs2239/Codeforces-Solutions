#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
    ll n;
    cin>>n;
    ll sum=0;
    int ans=0;
    for(int i=1;;i++)
    {
        sum+=i;
        ans++;
        if(sum>=n)break;
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