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
    int n;
    cin>>n;
    int ar[n];
    vector<int>tem;
    int br[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];
    for(int i=0;i<n;i++)
    {
        if(br[i]==0)tem.push_back(ar[i]);
    }
    sort(tem.begin(),tem.end(),greater<int>());
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(br[i]==0)
        {
            ar[i]=tem[k];
            k++;
        }
    }
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
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
    //solve();
    return 0;
}