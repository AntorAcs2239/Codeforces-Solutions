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
    ll n;
    cin>>n;
    string s;
    while(n>0)
    {
        if(n%2==0)
        {
            n=n/2;
            s+='B';
        }
        else 
        {
            n--;
            s+='A';
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
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