#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c=1;
    for (int i = 1; i < s.size(); i++)
    {
       if(s[i]=='('&&(s[i]==s[i-1]))c++;
    }
     cout<<c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //  solve();
    return 0;
}