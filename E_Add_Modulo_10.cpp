#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}
bool cmp(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.first.size() > p2.first.size())
        return true;
    return false;
}
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    vector<int>vec;
    set<int>st;
    bool flag=true;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
        st.insert(x);
        if(x%10==0)
        {
            flag=false;
        }
    }
    if(!flag)
    {
        if(st.size()==n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        return;
    }
    vector<int>tem;
    int t=vec[0]%10;
    for(int i=1;i<=10;i++)
    {
        tem.push_back(t%10);
        t+=t%10;
    }
    for(int i=0;i<10;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            int x=vec[j]%10;
            for(int k=1;k<=10;k++)
            {
                if(x%10==tem[i])
                {
                    c++;
                    break;
                }
                x+=x%10;
            }
        }
        if(c==n)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
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