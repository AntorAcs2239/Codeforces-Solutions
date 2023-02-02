#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    set<int>st;
    for(int i=0;i<n;i++)cin>>ar[i];
    map<int,int>mp;
    int i=0,j=n-1;
    int ans=0;
    map<int,int>c;
    for(int i=0;i<n;i++)
    {
        st.insert(ar[i]);
        mp[ar[i]]=ar[i];
        c[ar[i]]++;
    }
    map<int,vector<int>>tem;
    for(auto a:st)
    {
        tem[a].push_back(a);
    }
    for(i=0,j=n-1;i<j;i++,j--)
    {
        int t,t2;
        t=ar[i];
        t2=ar[j];
        map<int,int>p;
        p[t]=1;
        while (tem[t].back()!=t)
        {
            p[t]=1;
            t=tem[t].back();
            if(p[t]==1)break;
        }
        p.clear();
        p[t2]=1;
        while (tem[t2].back()!=t2)
        {
            p[t2]=1;
            t2=tem[t2].back();
             if(p[t2]==1)break;
        }
        if(t!=t2)
        {
            ans++;
            if(c[t]>=c[t2])
            {
                mp[t]=t2;
                tem[t].push_back(t2);
                c[t2]+=c[t];
            }
            else 
            {
                mp[t2]=t;
                tem[t2].push_back(t);
                c[t]+=c[t2];
            }
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