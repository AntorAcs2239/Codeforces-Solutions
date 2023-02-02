#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x % p;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
void sol()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<char>());
    ll ans=LLONG_MIN;
    string s1;
    for(int i=0;i<s.size();i++)
    {
        string s1,s2,s3,t;
        for(int j=i;j<s.size();j++)
        {
            t+=s[j];
            for(int k=j+1;k<s.size();k++)
            {
                s2+=s[k];
            }
            for(int k=0;k<j;k++)
            {
                s3+=s[k];
            }
            string tem;
            for(int k=0;k<s1.size();k++)tem+=s1[k];
            //ll a=stoll(tem);
            //ll b=stoll(t);
            ans=max(ans,a*b);
        }
    }
    cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin>>t;
    // while(t--)
    // {
    //     sol();
    // }
    sol();
    return 0;
}