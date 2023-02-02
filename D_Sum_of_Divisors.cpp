#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<int>vec[200005];
void solve()
{
    ll n;
    cin>>n;
    ll sum=0;
    sum+=(n*(n+1))/2;
    for(int i=2;i<=n;i++)
    {
        sum+=i;
        for(int j=2*i;j<=n;j=j+i)
        {
            sum+=j;
        }
    }
    cout<<sum<<endl;
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