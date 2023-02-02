#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')c++;
    }
    if(c==n||c==0)
    {
        cout<<"-1"<<endl;
        return;
    }
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='L'&&s[i+1]=='R')
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"0"<<endl;
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