#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007
#define gcd __gcd
vector<int> store;
bool ans = false;
void solve()
{
    ll n;
    cin>>n;
    int t=(n/2)+1;
    int x=t-1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            cout<<t<<" ";
            t++;
        }
        else 
        {
            cout<<x<<" ";
            x--;
        }
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
    return 0;
}