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
   ll n,s;
   cin>>n>>s;
   ll ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   ll tem=0,maxx=-1,maxxind;
   int tryy=0;
   for(int i=0;i<n;i++)
   {
       tem+=ar[i];
       if(ar[i]>maxx)
       {
           maxxind=i;
           maxx=ar[i];
       }
       if(tem>s)
       {
           cout<<maxxind+1<<endl;
           return;
       }
   }
   cout<<"0"<<endl;
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