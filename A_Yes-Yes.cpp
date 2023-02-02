#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string m;
    string s;
    cin>>s;
    for(int i=1;i<=100;i++)
    {
        m+="Yes";
    }
    for(int i=0;i<m.size();i++)
    {
         string tem;
         for(int j=i;j<m.size();j++)
         {
            tem+=m[j];
            if(tem.size()==s.size())
            {
                if(tem==s)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
         }
    }
   cout<<"NO"<<endl;
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