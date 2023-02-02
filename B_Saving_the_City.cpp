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
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int first=-1,last=-1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            first=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            last=i;
            break;
        }
    }
    if(first==-1)
    {
        cout<<"0"<<endl;
        return;
    }
    if(first==last)cout<<a<<endl;
    else 
    {
        int sum=a;
        for(int i=first;i<=last;i++)
        {
            int zero=0;
            if(s[i]=='0')
            {
                while (s[i]=='0')
                {
                    zero++;
                    i++;
                }
                sum+=min(a,b*zero);
            }
        }
        cout<<sum<<endl;
    }
    
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