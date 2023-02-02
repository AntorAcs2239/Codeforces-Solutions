#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) ;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) ;
    }
    return res;
}
void sol()
{
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='a'&&s[i+1]=='b')a++;
        if(s[i]=='b'&&s[i+1]=='a')b++;
    }
    if(a==b)cout<<s<<endl;
    else if(a>b)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='a'&&s[i+1]=='b')
            {
                s[i]='b';
                break;
            }
        }
        cout<<s<<endl;
    }
    else 
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='b'&&s[i+1]=='a')
            {
                s[i]='a';
                break;
            }
        }
        cout<<s<<endl;
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    //sol();
    return 0;
}