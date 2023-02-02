#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int lenOfLongSubarr(int arr[],
                    int n,
                    int k)
{
 
    // unordered_map 'um' implemented
    // as hash table
    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++) {
 
        // accumulate sum
        sum += arr[i];
 
        // when subarray starts from index '0'
        if (sum == k)
            maxLen = i + 1;
 
        // make an entry for 'sum' if it is
        // not present in 'um'
        if (um.find(sum) == um.end())
            um[sum] = i;
 
        // check if 'sum-k' is present in 'um'
        // or not
        if (um.find(sum - k) != um.end()) {
 
            // update maxLength
            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }
 
    // required maximum length
    return maxLen;
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll t=1;
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        ll tem=ar[i+1]*2;
        if(tem>ar[i])
        {
            t++;
        }
        else 
        {
            ans+=max((ll)0,t-k);
            t=1;
        }
    }
    ans+=max((ll)0,t-k);
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}