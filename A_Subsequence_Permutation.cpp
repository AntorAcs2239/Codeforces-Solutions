#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<int>vec[200005];
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string tem=s;
    sort(tem.begin(),tem.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(tem[i]!=s[i])ans++;
    }
    cout<<ans<<endl;
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