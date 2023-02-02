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
    for(int i=0;i<8;i++)
    {
        string s;
        set<int>st;
        for(int j=0;j<8;j++)
        {
            s+=ar[i][j];
            st.insert(ar[i][j]);
        }
        if(st.size()==1)
        {
            if(s[0]!='.')
            {
                cout<<s[0]<<endl;
                return;
            }
        }
    }
     for(int j=0;j<8;j++)
    {
        string s;
        set<int>st;
        for(int i=0;i<8;i++)
        {
            s+=ar[i][j];
            st.insert(ar[i][j]);
        }
        if(st.size()==1)
        {
            if(s[0]!='.')
            {
                cout<<s[0]<<endl;
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
    //  solve();
    return 0;
}