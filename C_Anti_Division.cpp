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
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   ll x=(b/c)-((a-1)/c);
   ll y=(b/d)-((a-1)/d);
   ll tem=(c*d)/gcd(c,d);
   ll z=(b/tem)-((a-1)/tem);
   cout<<(b-a+1)-(x+y-z)<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}