#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
int binarysearch(int ar[],int n,int x)
{
   int low=0;
   int high=n-1;
   int mid;
   while (low<high)
   {
       mid=(low+high)/2;
       if((x-ar[mid])>0)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
   return mid;
}
map<ll,pair<ll,ll>>mp;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    vector<pair<ll,ll>>vec;
    vec.push_back(make_pair(0,ar[0]-1));
    for(int i=0;i<n-1;i++)
    {
        vec.push_back(make_pair(ar[i],ar[i+1]-1));
    }
    vec.push_back(make_pair(ar[n-1],LONG_LONG_MAX));
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<" "<<i<<endl;
    }
}
int main()
{
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
}