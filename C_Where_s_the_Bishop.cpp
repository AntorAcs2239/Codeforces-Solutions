#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    char ar[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)cin>>ar[i][j];
    }
     for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            if(ar[i][j]=='#'&&ar[i-1][j-1]=='#'&&ar[i-1][j+1]=='#'&&ar[i+1][j-1]=='#'&&ar[i+1][j+1]=='#')
            {
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
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
    // solve();
    return 0;
}