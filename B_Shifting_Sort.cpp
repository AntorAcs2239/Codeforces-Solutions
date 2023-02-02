#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>vec;
    vector<int>tem;
    ll ar[n+1];
    ll br[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        br[i]=ar[i];
    }
    ar[0]=0;
    sort(br+1,br+n+1);
    for(int i=1;i<=n;i++)
    {
        if(ar[i]!=br[i])
        {
            for(int j=i+1;j<=n;j++)
            {
                if(ar[j]==br[i])
                {
                   for(int k=j;k>i;k--)
                   {
                      ar[k]=ar[k-1];
                   }
                   ar[i]=br[i];
                   vec.push_back(make_pair(i,j));
                   tem.push_back(j-i);
                   break;
                }
            }
        }
    }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<" "<<tem[i]<<endl;
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}