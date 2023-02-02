#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    string s;
    for(int i=0;i<n;i++)cin>>ar[i];
    cin>>s;
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        for(int j=0;j<n;j++)
        {
            if((ar[j]==ar[i])&&(s[j]!=ch))
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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