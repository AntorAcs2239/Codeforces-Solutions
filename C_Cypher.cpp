#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int tem=n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        for(int j=0;j<=9;j++)
        {
            int tem=j;
            for(int k=0;k<s.size();k++)
            {
                if(s[k]=='D')
                {
                    if(tem==0)tem=9;
                    else tem--;
                }
                else 
                {
                    if(tem==9)tem=0;
                    else tem++;
                }
            }
            if(tem==ar[i])
            {
                cout<<j<<" ";
                break;
            }
        }
    }
    cout<<endl;
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
     //solve();
    return 0;
}