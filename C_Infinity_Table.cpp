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
vector<int>vec[200005];
vector<int>visited(200005,0);
map<int,int>mp;
void bfs()
{
    queue<int>q;
    visited[1]=1;
    q.push(1);
    while (!q.empty())
    {
       int t=q.front();
       q.pop();
       for(auto a:vec[t])
       {
           if(visited[a]==0)
           {
               visited[a]=1;
               mp[a]+=mp[t];
               q.push(a);
           }
       }
    }
}
void solve()
{
   ll k;
   cin>>k;
   ll t=sqrt(k);
   if(t*t==k)
   {
       cout<<t<<" "<<"1"<<endl;
   }
   else 
   {
       ll x=(t*t)+1;
       ll p=k-x;
       ll y=(t+1)*(t+1);
       ll q=y-k;
       if(p<q)
       {
           cout<<k-x+1<<" "<<t+1<<endl;
       }
       else if(q<p)
       {
           cout<<t+1<<" "<<y-k+1<<endl;
       }
       else 
       {
           cout<<t+1<<" "<<t+1<<endl;
       }
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