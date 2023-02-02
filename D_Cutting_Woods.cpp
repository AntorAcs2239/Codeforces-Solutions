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
   ll n,m;
   cin>>n>>m;
   set<ll>st;
   st.insert(0);
   st.insert(n);
   while(m--)
   {
       ll a,b,c;
       cin>>a>>c;
       if(a==1)
       {
           st.insert(c);
       }
       else 
       {
           auto x=st.lower_bound(c);
           ll a=(*x);
           x--;
           cout<<a-(*x)<<endl;
       }
   }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}