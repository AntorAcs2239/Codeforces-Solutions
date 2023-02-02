#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) ;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) ;
    }
    return res;
}
int findLongestPalindrome(string X, int i, int j)
{
    // Base condition
    if (i > j) {
        return 0;
    }
 
    // If the string `X` has only one character, it is a palindrome
    if (i == j) {
        return 1;
    }
 
    // If the last character of the string is the same as the first character,
    if (X[i] == X[j])
    {
        // include the first and last characters in palindrome
        // and recur for the remaining substring `X[i+1, j-1]`
        return findLongestPalindrome(X, i + 1, j - 1) + 2;
    }
 
    /*
      If the last character of the string is different from the first character
        1. Remove the last character and recur for the remaining substring
           `X[i, j-1]`
        2. Remove the first character and recur for the remaining substring
           `X[i+1, j]`
    */
 
    // Return the maximum of the two values
    return max(findLongestPalindrome(X, i, j - 1), findLongestPalindrome(X, i + 1, j));
}
int smalest_missing_num(vector<int>nums, int start_pos, int end_pos)
{
    if (start_pos  > end_pos)
        return end_pos + 1;
 
    if (start_pos != nums[start_pos])
        return start_pos;
 
    int mid = (start_pos + end_pos) / 2;
 
    if (nums[mid] == mid)
        return smalest_missing_num(nums, mid + 1, end_pos);
 
    return smalest_missing_num(nums, start_pos, mid);
}
void sol()
{
    map<int,vector<int>>mp;
    int n,m;
    cin>>n>>m;
    int ar[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        mp[ar[i]].push_back(i);
    }
    while(m--)
    {
        int l,r,v;
        cin>>l>>r>>v;
        auto vec=mp[v];
        cout<<v<<": ";
        for(auto a:vec)
        {
            cout<<a<<" ";
        }
        cout<<endl;
        int ans=smalest_missing_num(vec,l-1,r-1);
        cout<<ans<<endl;
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin>>t;
    // while(t--)
    // {
    //     sol();
    // }
    sol();
    return 0;
}