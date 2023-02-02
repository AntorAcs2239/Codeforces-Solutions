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
    int n;
    cin>>n;
    string a;
    cin>>a;
    vector<int>vec[26];
    for(int i=0;i<n;i++)
    {
        vec[a[i]-'a'].push_back(i+1);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string x;
        cin>>x;
        map<int,int>mp;
        for(int i=0;i<x.size();i++)
        {
            mp[x[i]-'a']++;
        }
        int maxx=-1;
        for(int i=0;i<26;i++)
        {
            if(mp[i]>0)
            {
                maxx=max(maxx,vec[i][mp[i]-1]);
            }
        }
        cout<<maxx<<endl;
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