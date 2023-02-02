#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++)cin>>ar[i];
  int m=*max_element(ar,ar+n);
  int mi=*min_element(ar,ar+n);
  int a=m-ar[0];
  int b=ar[n-1]-mi;
  if(ar[0]==mi||ar[n-1]==m)
  {
    cout<<m-mi<<endl;
    return;
  }
  int ans=-1;
  for(int i=1;i<=2005;i++)
  {
    int t=ar[0];
    for(int j=0;j<n-1;j++)
    {
        ar[j]=ar[j+1];
    }
    ar[n-1]=t;
    ans=max(ans,ar[n-1]-ar[0]);
  }
  cout<<max({ans,a,b})<<endl;
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