#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
string bin(int n,int l)
{
    string tem;
    int k,c;
     for (c = l; c >= 0; c--)
    {
    k = n >> c;

    if (k & 1)
      tem+='1';
    else
      tem+='0';
   }
   return tem;
}
bool sear(string s,string t)
{
    int c=0;
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[j])
        {
            c++;
            j++;
        }
        if(c==2)return true;
    }
    return false;
}
bool tr(ll n)
{
    string t=to_string(n);
    map<char,int>mp;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]!='0'&&(n%(t[i]-'0')!=0))return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    for(ll i=n;;i++)
    {
        if(tr(i))
        {
            cout<<i<<endl;
            return;
        }
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
    //solve();
    return 0;
}