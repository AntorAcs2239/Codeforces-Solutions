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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a/2)==c&&(b/2)==d)
    {
        cout<<fixed<<setprecision(6)<<(a*b)/2<<" "<<"1"<<endl;
    }
    else 
    {
         cout<<fixed<<setprecision(6)<<(a*b)/2<<" "<<"0"<<endl;
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve()
    // }
    solve();
    return 0;
}