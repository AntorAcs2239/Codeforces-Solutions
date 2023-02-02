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
    string s;
    cin>>s;
    int ans=s[n-1]-'0';
    if(n==2)
    {
        ans+=(s[0]-'0')*10;
        cout<<ans<<endl;
        return;
    }
    for(int i=n-2;i>=0;i--)
    {
        int t=s[i]-'0';
        if(t>0)ans+=t+1;
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
    //solve();
    return 0;
}