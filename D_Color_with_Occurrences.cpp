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
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<pair<string, int>> vec;
    vector<string> tem;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        tem.push_back(t);
    }
    map<string, int> mp;
    for (int i = 0; i < s.size(); i++)
        for (int len = 1; len <= s.size() - i; len++)
            mp[s.substr(i, len)] = 1;

    for (int i = 0; i < n; i++)
    {
        if (mp[tem[i]] == 1)
        {
            vec.push_back({tem[i], i + 1});
        }
    }
    sort(vec.begin(), vec.end(), cmp);
    vector<pair<int, int>> ans;
    map<int, int> color;
    for (int i = 0; i < vec.size(); i++)
    {
        string sub = vec[i].first;
        for (int j = 0; j < s.size(); j++)
        {
            for (int len = 1; len <= s.size() - j; len++)
            {
                string t=s.substr(j,len);
                if(t==sub)
                {
                    ans.push_back({vec[i].second,j+1});
                    for(int p=j;p<=j+sub.size();p++)
                    {
                        color[p]=1;
                    }
                    bool flag=true;
                    for(int p=0;p<s.size();p++)
                    {
                        if(color[p]==0)
                        {
                            flag=false;
                            break;
                        }
                    }
                    if(flag)
                    {
                        cout<<ans.size()<<endl;
                        for(int p=0;p<ans.size();p++)
                        {
                            cout<<ans[p].first<<" "<<ans[p].second<<endl;
                        }
                        return;
                    }
                    break;
                }
            }
        }
    }
    cout<<"-1"<<endl;
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