#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=1;i<=n;i++)cin>>ar[i];
   if(ar[1]<ar[n])cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
}