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
    map<int,string>mp;
    string s;
    int k;
    cin>>s>>k;
    sort(s.begin(),s.end());
    int p=1;
    do
    {
        mp[p]=s;
        p++;
    } while (next_permutation(s.begin(),s.end()));
    cout<<mp[k]<<endl;
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