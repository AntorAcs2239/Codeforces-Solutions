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
   ll a,b,c;
   cin>>a>>b>>c;
   ll maxx=max(a,b);
   ll minn=min(a,b);
   ll si=2*(maxx-minn-1)+2;
   ll h=si/2;
   if(si<maxx)
   {
       cout<<"-1"<<endl;
       return;
   }
   if((maxx-h)!=minn)
   {
       cout<<"-1"<<endl;
       return;
   }
   if(c>si)cout<<"-1"<<endl;
   else if((c-h)>0)cout<<c-h<<endl;
   else cout<<c+h<<endl;
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