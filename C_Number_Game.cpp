#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[500005];
vector<int>visited(500005,0);
void bfs(int start)
{
    queue<int>qu;
    qu.push(start);
    visited[start]=1;
    while(!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                qu.push(a);
            }
        }
    }
}
bool isprime(ll n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    if((n%2==1&&n!=1)||n==2)
    {
        cout<<"Ashishgup"<<endl;
        return;
    }
    ll tem=n/2;
    if(!isprime(tem)&&(n&(n-1))!=0)
    {
        cout<<"Ashishgup"<<endl;
    }
    else cout<<"FastestFinger"<<endl;
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