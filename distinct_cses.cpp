#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
   int n;
   cin>>n;
   ll x;
   set<ll>st;
   while (n--)
   {
       cin>>x;
       st.insert(x);
   }
   cout<<st.size()<<endl;
   
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