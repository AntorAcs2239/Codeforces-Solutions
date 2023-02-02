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
   string a,b,c;
   cin>>a>>b>>c;
   map<char,int>mpa;
   map<char,int>mpb;
   map<char,int>mpc;
   for(int i=0;i<a.size();i++)mpa[a[i]]++;
   for(int i=0;i<b.size();i++)mpb[b[i]]++;
   for(int i=0;i<c.size();i++)mpc[c[i]]++;
    bool flag=true;
    for(auto x:mpb)
    {
        if(mpb[x.first]!=mpa[x.first])
        {
            if(mpb[x.first]>mpa[x.first])
            {
                int t=mpa[x.first];
                int t2=mpc[x.first];
                if((t+t2)<mpb[x.first])
                {
                    flag=false;
                    break;
                }
            }
            else{
                flag=false;
                break;
            }
        }
    }
    int count=0;
    int j=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]==a[j])
        {
            count++;
            j++;
        }
    }
    if(count==a.size()&&flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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