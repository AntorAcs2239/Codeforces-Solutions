#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
int color[100005];
vector<int>graph[100005];
int parent[100005];
vector<int>visited(200005,0);
vector<int>leaf;
int n,k;
int ans=0;
void dfs(int node,int par,int max1,int cur1)
{
    if(color[node]==1)cur1++;
    else cur1=0;
    max1=max(max1,cur1);
    int child=0;
    for(auto a:graph[node])
    {
        if(a!=par)
        {
            child++;
            dfs(a,node,max1,cur1);
        }
    }
    if(child==0&&max1<=k)ans++;
}
void solve()
{
   int a,b;
   cin>>a>>b;
   if(a==0||b==0)
   {
       cout<<"2"<<endl;
       cout<<(a+b)/2<<" "<<(a+b+1)/2<<endl;
   }
   else if(a==1&&b==1)
   {
       cout<<"2"<<endl;
       cout<<"0"<<" "<<"2"<<endl;
   }
   else 
   {
       cout<<a+b+1<<endl;
       for(int i=0;i<a+b+1;i++)
       {
           cout<<i<<" ";
       }
       cout<<endl;
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