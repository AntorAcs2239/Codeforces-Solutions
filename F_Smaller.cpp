#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s, t;
    int x = 0, y = 0, c1 = 1, c2 = 1;
      bool flag=false;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        string c;
        cin >> a >> b >> c;
      
        if (a == 1)
        {
            for (int i = 0; i < c.size(); i++)
            {
                if(c[i]=='a')c1++,flag=true;
            }
        }
        else
        {
            for (int i = 0; i < c.size(); i++)
            {
                y= max(y, c[i] - 'a');
                if(c[i]=='a')c2++;
            }
        }
        if(x==y)
        {
            if(c1<=c2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
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
    //  solve();
    return 0;
}