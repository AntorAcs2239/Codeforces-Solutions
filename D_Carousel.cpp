#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<int>vec[200005];
vector<int>visited(200005,0);
map<int,int>mp;
void bfs(int s)
{
    queue<int>q;
    visited[s]=1;
    q.push(s);
    mp[s]=1;
    while (!q.empty())
    {
        int t=q.front();
        int v=mp[t];
        q.pop();
        for(auto a:vec[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                q.push(a);
                if(v==1)
                {
                    mp[a]=2;
                }
                else if(v==2)mp[a]=1;
                else mp[a]=1;
            }
            else
            {

                if(mp[a]==v)
                {
                    mp[a]=v+1;
                }
            }
        }
    }
}
void solve()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)vec[i].clear();
   for(int i=0;i<n;i++)visited[i]=0;
   mp.clear();
   for(int i=0;i<n;i++)cin>>ar[i];
   for(int i=0;i<n-1;i++)
   {
       if(ar[i]!=ar[i+1])
       {
           vec[i].push_back(i+1);
           vec[i+1].push_back(i);
       }
   }
   if(ar[0]!=ar[n-1])
   {
       vec[n-1].push_back(0);
       vec[0].push_back(n-1);
   }
   int flag=-1;
   for(int i=0;i<n;i++)
   {
       if(visited[i]==0)
       {
          bfs(i);
       }
   }
    for(int i=0;i<n;i++)
   {
      flag=max(flag,mp[i]);
   }
   cout<<flag<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<mp[i]<<" ";
   }
   cout<<endl;
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