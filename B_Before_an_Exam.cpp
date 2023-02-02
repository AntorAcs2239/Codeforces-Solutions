#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>store;
bool ans=false;
void flag(int ar[],int i,int n, int s)
{
    if(i==n)
    {
        if(s%360==0)ans=true;
        return;
    }
    else 
    {
       flag(ar,i+1,n,s+ar[i]);
       flag(ar,i+1,n,s-ar[i]);
    }
    
}
void solve()
{
    int n,s;
    cin>>n>>s;
    int ar[n],br[n];
    int m=0,mx=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        ar[i]=x;
        br[i]=y;
        m+=x;
        mx+=y;
    }
    if(m>s||mx<s)cout<<"NO"<<endl;
    else 
    {
        
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
    return 0;
}