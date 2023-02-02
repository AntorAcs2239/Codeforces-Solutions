#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
string bin(int n,int l)
{
    string tem;
    int k,c;
     for (c = l; c >= 0; c--)
    {
    k = n >> c;

    if (k & 1)
      tem+='1';
    else
      tem+='0';
   }
   return tem;
}
void solve()
{
    int n,d;
    cin>>n>>d;
    string t;
    cin>>t;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(t[i]=='0')f++;
        else break;
    }
    if(f==n)
    {
        // int x=d*2;
        // if(f%d==0)
        // {
        //     cout<<(f/d)<<endl;
        // }
        // else cout<<(f+x-1)/x<<endl;
        cout<<(f+d)/(d+1)<<endl;
        return;
    }
    int ans=0;
    ans+=f/(d+1);
    int last=0;
    for(int i=n-1;i>=0;i--)
    {
        if(t[i]=='0')last++;
        else break;
    }
    ans+=last/(d+1);
    int fast;
    for(int i=0;i<n;i++)
    {
        if(t[i]=='1')
        {
            fast=i;
            break;
        }
     }
     for(int i=n-1;i>=0;i--)
    {
        if(t[i]=='1')
        {
            last=i;
            break;
        }
    }
    if(fast==last)
    {
        cout<<ans<<endl;
        return;
    }
    int tem=0;
    for(int i=fast;i<=last;i++)
    {
        if(t[i]=='0')tem++;
        else if(t[i]=='1')tem=0;
        if(tem==(2*d)+1)
        {
            ans++;
            tem=d;
        }
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
   // solve();
    return 0;
}