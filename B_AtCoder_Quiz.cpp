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
    map<string,int>mp;
    mp["ARC"]=1;
    mp["AGC"]=1;
    mp["AHC"]=1;
    mp["ABC"]=1;
    string a,b,c;
    cin>>a>>b>>c;
    mp[a]=0;
    mp[b]=0;
    mp[c]=0;
    for(auto a:mp)
    {
        if(a.second==1)
        {
            cout<<a.first<<endl;
            return;
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