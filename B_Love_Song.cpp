#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    map<char,int>mp;
    int j=1;
    for(char i='a';i<='z';i++)
    {
        mp[i]=j;
        j++;
    }
    ll ar[n+1];
    for(int i=0;i<a.size();i++)
    {
        ar[i+1]=mp[a[i]];
    }
    ar[0]=0;
    for(int i=1;i<=n;i++)
    {
        ar[i]+=ar[i-1];
    }
    while (k--)
    {
        int x,y;
        cin>>x>>y;
        cout<<ar[y]-ar[x-1]<<endl;
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
    //     solve();
    // }
    solve();
    return 0;
}