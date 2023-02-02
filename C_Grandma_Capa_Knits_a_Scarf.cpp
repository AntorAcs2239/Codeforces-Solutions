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
void sol()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll ans=INT_MAX;
   for(char a='a';a<='z';a++)
   {
       bool flag=true;
       ll c=0;
       for(int i=0,j=n-1;i<=j;)
       {
           if(s[i]==s[j])
           {
               i++;
               j--;
           }
           else 
           {
               if(s[i]==a)
               {
                   i++;
                   c++;
               }
               else if(s[j]==a)
               {
                   j--;
                   c++;
               }
               else 
               {
                   flag=false;
                   break;
               }
           }
       }
       if(flag)
       {
           ans=min(ans,c);
       }
   }
   if(ans==INT_MAX)cout<<"-1"<<endl;
   else cout<<ans<<endl;
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
    //sol();
    return 0;
}