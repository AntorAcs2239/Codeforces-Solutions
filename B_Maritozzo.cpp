#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
void solve()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    string ans;
    for(int i=0;i<s4.size();i++)
    {
        if(s4[i]=='1')ans+=s1;
        else if(s4[i]=='2')ans+=s2;
        else if(s4[i]=='3')ans+=s3;
    }
    cout<<ans<<endl;
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
    return 0;
}