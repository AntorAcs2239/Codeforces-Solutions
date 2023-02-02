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
    int n;
    cin>>n;
    int ar[n+1];
    int br[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        br[ar[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<br[i]<<" ";
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}