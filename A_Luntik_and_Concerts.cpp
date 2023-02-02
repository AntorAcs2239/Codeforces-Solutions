#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  ll a1,b1,c1;
  cin>>a1>>b1>>c1;
  ll sm=a1+(b1*2)+(c1*3);
  cout<<(sm%2)<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}