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
  vector<ll>vec;
  for(int i=1;i<=n;i++)
  {
      ll x;
      cin>>x;
      if(x==1)vec.push_back(i);
  }
  if(vec.size()==0)
  {
      cout<<"0"<<endl;
      return;
  }
  ll ans=1;
  for(int i=0;i<vec.size()-1;i++)
  {
      ans=ans*(vec[i+1]-vec[i]);
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