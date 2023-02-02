#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    s+=s;
    int cur;
    bool flag=true;
    int ans=0;
    for(int i=0;i<n*2;i++)
    {
        if((s[i]==ch)&&flag)
        {
            cur=i;
            flag=false;
        }
        if(s[i]=='g'&&!flag)
        {
            int t=abs(i-cur);
            ans=max(ans,t);
            flag=true;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //  solve();
    return 0;
}