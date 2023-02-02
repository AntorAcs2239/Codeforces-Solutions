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
    string a;
    cin>>a;
    ll ans=0,x=0,b=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='o')
        {
            b+=x;
        }
        else if(i>0&&a[i-1]=='v')
        {
            x++;
            ans+=b;
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