#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<string>vec;
    map<string,int>mp;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
        mp[s]=1;
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        string tem=vec[i];
        string t;
        bool flag=false;
        for(int j=0;j<tem.size()-1;j++)
        {
            t+=tem[j];
            string t2;
            for(int k=j+1;k<tem.size();k++)t2+=tem[k];
            if(mp[t]==1&&mp[t2]==1)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            ans.push_back(1);
        }
        else ans.push_back(0);
    }
    for(int i=0;i<n;i++)cout<<ans[i];
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