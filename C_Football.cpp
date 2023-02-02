#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void solve()
{
    int n,k;
    cin>>n>>k;
    map<pair<int,int>,int>mp;
    vector<int>graph[n+1];
    int tem=0;
    for(int i=1;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(c==k)break;
                if(mp[make_pair(i,j)]==0&&mp[make_pair(j,i)]==0)
                {
                    c++;
                    tem++;
                    graph[i].push_back(j);
                    mp[make_pair(i,j)]=1;
                    mp[make_pair(j,i)]=1;
                }
            }
        }
        if(c<k)
        {
            cout<<"-1"<<endl;
            return;
        }
    }
     cout<<tem<<endl;
    for(int i=1;i<=n;i++)
    {
        auto t=graph[i];
       for(int j=0;j<t.size();j++)
       {
           cout<<i<<" "<<t[j]<<endl;
       }
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