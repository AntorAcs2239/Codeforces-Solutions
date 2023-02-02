#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll t=b-(a-1);
   map<int,int>mp;
   vector<int>vec;
    int x=0;
    for(int i=1;i<=a-1;i++)
    {
        x++;
        vec.push_back(1);
        mp[x]=1;
        mp[t+x]=1;
    }
    mp[b]=1;
    vec.push_back(t);
    for(int i=1;i<=b/2;i++)
    {
        if(mp[i]==0&&mp[b-i]==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
            cout<<endl;
            cout<<i<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
}