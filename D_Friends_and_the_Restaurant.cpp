#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
   ll n;
   cin>>n;
   ll ar[n];
   ll br[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   for(int i=0;i<n;i++)cin>>br[i];
   vector<ll>vec;
   for(int i=0;i<n;i++)vec.push_back(br[i]-ar[i]);
   sort(vec.begin(),vec.end());
   ll ans=0;
//    for(int i=0;i<n;i++)cout<<vec[i]<<" ";
//    cout<<endl;
   for(int i=0,j=n-1;i<j;)
   {
    if((vec[i]+vec[j])>=0)
    {
        ans++;
        i++;
        j--;
    }
    else i++;
   }
   cout<<ans<<endl;
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
    //  solve();
    return 0;
}