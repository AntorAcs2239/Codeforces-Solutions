#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    string p;
    map<char, int> mp;
    map<char,int>idx;
    for(int i=0;i<s.size();i++)
    {
        idx[s[i]]=i;
    }
    char ch = 'a';
    for (int i = 1; i <= 26; i++)
    {
        mp[ch] = i;
        ch++;
    }
    int sum = INT_MAX;
    char t;
    for (int i = 1; i < s.size(); i++)
    {
        int tem = abs(mp[s[0]] - mp[s[i]]) + abs(mp[s[i]] - mp[s[s.size() - 1]]);
        if (tem < sum)
        {
            sum = min(sum, tem);
            t=s[i];
        }
    }
    bool flag=true;
    sum-=abs(mp[s[s.size()-1]]-mp[t]);
    for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]!=t)p+=s[i];
        else if(flag)
        {
            flag=false;
        }
        else p+=s[i];
    }
    sort(p.begin(),p.end());
    string t1=p;
    string t2=p;
    string t3;
    t3=s[0];
    t3+=t1;
    t1=t3;
    t2+=s[0];
    cout<<t1<<" "<<t2<<endl;
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