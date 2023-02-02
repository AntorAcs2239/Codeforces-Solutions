#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
ll convert(string t)
{
    ll ans=0;
    ll tem=1;
    for(int i=t.size()-1;i>=0;i--)
    {
        ans=ans+(t[i]-'0')*tem;
        tem=tem*10;
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    vector<ll>final;
    for(int i=1;i<=5;i++)
    {
        string t;
        for(int j=1;j<=i;j++)t+='4';
        for(int j=1;j<=i;j++)t+='7';
        do
        {
            ll tem=convert(t);
            final.push_back(tem);
        } while (next_permutation(t.begin(),t.end()));
    }
    sort(final.begin(),final.end());
    for(int i=0;i<final.size();i++)
    {
        if(final[i]>=n)
        {
            cout<<final[i]<<endl;
            break;
        }
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