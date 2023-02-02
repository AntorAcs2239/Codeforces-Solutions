#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void t()
{
    int t=0;
    for(int i=2;i<=100000;i++)
    {
        bool flag=true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)t++;
    }
    cout<<t<<endl;
}
void solve()
{
    string s;
    cin>>s;
    int one=0,zero=0,cur_one=0,cur_zero=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')one++;
        else zero++;
    }
    int ans=INT_MAX;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')cur_zero++;
        else cur_one++;
        int a=one-cur_one+cur_zero;
        int b=zero-cur_zero+cur_one;
        ans=min(ans,min(a,b));
    }
    cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
    return 0;
}