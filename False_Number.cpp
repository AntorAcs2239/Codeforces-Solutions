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
    string a;
    cin>>a;
    int t=a[0]-'0';
    if(t>1)
    {
        cout<<"1"<<a<<endl;
    }
    else
    {
        a.insert(a.begin()+1,'0');
        cout<<a<<endl;
    }
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