#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
int s(int n)
{
    int t=0;
    while(n!=0)
    {
        t+=n%10;
        n=n/10;
    }
    return t;
}
void solve()
{
    int n;
    cin>>n;
    while(1)
    {
        if(s(n)<10)
        {
            cout<<s(n)<<endl;
            return;
        }
        n=s(n);
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
}