#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    string s;
    cin>>s;
    vector<int>vec;
    for(int i=0;i<s.size();i++)
    {
        vec.push_back(s[i]-'A');
    }
    for(int i=2;i<vec.size();i++)
    {
        int a=vec[i-1];
        int b=vec[i-2];
        if(vec[i]!=((a+b)%26))
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
}