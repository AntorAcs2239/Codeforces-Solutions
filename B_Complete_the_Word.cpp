#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
ll convert(string t)
{
    ll ans=0;
    ll tem=1;
    for(int i=t.size()-1;i>=0;i--)
    {
        ans=ans+(t[i]-'0')*tem;
        tem=tem*10;
    }
    return ans;
}
void solve()
{
    string a;
    cin>>a;
    map<char,int>mp;
    int p=-1,q=-1;
    for(int i=0,j=0;j<a.size();)
    {
        if((j-i)<25)
        {
             mp[a[j]]++;
             j++;
        }
        else 
        {
            mp[a[j]]++;
            bool flag=true;
            for(char x='A';x<='Z';x++)
            {
                if(mp[x]>1)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
               p=i;
               q=j;
               break;
            }
            else 
            {
                mp[a[i]]--;
            }
            i++;
            j++;
        }
    }
    if(p==-1)
    {
        cout<<"-1"<<endl;
        return;
    }
    for(int i=p;i<=q;i++)
    {
        if(a[i]=='?')
        {
            for(char x='A';x<='Z';x++)
            {
                if(mp[x]==0)
                {
                    a[i]=x;
                    mp[x]++;
                    break;
                }
            }
        }
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='?')a[i]='A';
    }
    cout<<a<<endl;
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