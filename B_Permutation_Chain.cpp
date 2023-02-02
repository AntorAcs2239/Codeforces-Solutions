#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)ar[i]=i;
    int k=0;
    cout<<n<<endl;
    for(int j=1;j<=n;j++)cout<<ar[j]<<" ";
    cout<<endl;
    for(int i=1;i<n;i++)
    {
       
        swap(ar[n-k],ar[n-k-1]);
        k++;
         for(int j=1;j<=n;j++)cout<<ar[j]<<" ";
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
     //solve();
    return 0;
}