#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
int s(int n)
{
    int t=0;
    while(n!=0)
    {
        t+=n%10;
        n=n/10;
    }
    return t;
}
void solve()
{
    string s;
    cin>>s;
    char ch=s[s.size()-1];
    int t=ch-'0';
    if(t>=0&&t<=2)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')break;
            cout<<s[i];
        }
        cout<<"-";
    }
    else if(t>=3&&t<=6)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')break;
            cout<<s[i];
        }
    }
    else 
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')break;
            cout<<s[i];
        }
        cout<<"+";
    }
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