#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>visited(200005,0);
void solve()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    int br[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)ar[i][j]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>br[i][j];
            if(br[i][j]==0)
            {
                for(int k=0;k<m;k++)
                {
                    ar[i][k]=0;
                }
                for(int k=0;k<n;k++)
                {
                    ar[k][j]=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int t=0;
            for(int k=0;k<m;k++)
            {
                t=t|ar[i][k];
            }
             for(int k=0;k<n;k++)
            {
                t=t|ar[k][j];
            }
            if(t!=br[i][j])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
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