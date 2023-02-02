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
    int k=1;
    while(1)
    {
        if(a==b)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(a==x||b==y)break;
        if(a==n)a=0;
        if(b==1)b=n+1;
        a++;
        b--;
        k++;
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