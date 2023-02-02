#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void t()
{
    int t=0;
    for(int i=2;i<=100000;i++)
    {
        bool flag=true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)t++;
    }
    cout<<t<<endl;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=1)
        {
            ll tem=ar[i];
            for(int j=2;j<=sqrt(tem);j++)
            {
                if(tem%j==0)
                {
                    while(tem%j==0)
                    {
                        tem=tem/j;
                    }
                    mp[j]=1;
                }
            }
            if(tem>1)mp[tem]=1;
        }
    }
    vector<int>vec;
    vec.push_back(1);
    for(int i=2;i<=m;i++)
    {
        bool flag=true;
        for(auto a:mp)
        {
            if(i%a.first==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)vec.push_back(i);
    }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
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