#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>visited(200005,0);
vector<int>paren(200005,0);
void solve()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   double ans=0;
   sort(ar,ar+n);
   ans+=ar[n-1];
   double tem=0;
   for(int i=0;i<n-1;i++)
   {
       tem+=ar[i];
   }
   tem=tem/(n-1);
   ans+=tem;
   cout<<fixed<<setprecision(10)<<ans<<endl;
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
    return 0;
}