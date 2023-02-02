#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    vector<int>p;
    vector<int>q;
    for(int i=a;;i++)
    {
        p.push_back(i);
        if(i==n)
        {
            if(i==x)break;
            i=1;
            p.push_back(1);
        }
        if(i==x)
        {
            break;
        }
    }
    for(int i=b;;i--)
    {
        q.push_back(i);
        if(i==1)
        {
            if(i==y)break;
            i=n;
            q.push_back(n);
        }
        if(i==y)
        {
            break;
        }
    }
    for(int i=0;i<min(p.size(),q.size());i++)
    {
        if(p[i]==q[i])
        {
            cout<<"YES"<<endl;
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