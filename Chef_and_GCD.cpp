#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll g=gcd(a,b);
    if(g>1)cout<<"0"<<endl;
    else if((a%2==1)&&(b%2==1))
    {
       ll t=a+1;
       if(gcd(t,b)>1)cout<<"1"<<endl;
       else 
       {
           t=b+1;
           if(gcd(t,a)>1)cout<<"1"<<endl;
           else cout<<"2"<<endl;
       }
    }
    else cout<<"1"<<endl;
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
   // solve();
    return 0;
}