#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
   int n;
   cin>>n;
   if(n==3)
   {
    cout<<"-1"<<endl;
    return;
   }
   int t=(n+1)/2;
   for(int i=n;i>t;i--)cout<<i<<" ";
   for(int i=1;i<=t;i++)cout<<i<<" ";
   cout<<endl;
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