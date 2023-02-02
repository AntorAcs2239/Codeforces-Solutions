#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll ar[n];
    ll br[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }
    bool flag=false;
    int idx;
    for(int i=1;i<n;i++)
    {
      if(ar[i]<ar[i-1])
      {
        flag=true;
        idx=i;
        break;
      }
    }
    for(int i=idx+1;i<n;i++)
    {
       if(flag&&ar[i]>ar[i-1])
       {
        cout<<"NO"<<endl;
        return;
       }
    }
    cout<<"YES"<<endl;
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
    // solve();
    return 0;
}