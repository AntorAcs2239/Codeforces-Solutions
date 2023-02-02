#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
   ll a,b;
   cin>>a>>b;
   ll x=abs(a)+abs(b);
   if(x%2==0)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}