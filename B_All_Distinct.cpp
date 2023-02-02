#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
  int n;
  cin>>n;
  int ar[n];
  set<int>st;
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
    st.insert(ar[i]);
  }
  int ans=st.size();
  int tem=n-ans;
  if(tem%2==1)ans--;
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
    // solve();
    return 0;
}