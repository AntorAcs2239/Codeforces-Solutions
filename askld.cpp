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
   string a;
   cin>>a;
   string s1;
   s1="aaaaaaaaaabbbbbbbbbbbbbbbbbb";
   string ans1;
   do
   {
      ans1=s1;
   }while(next_permutation(s1.begin(),s1.end()));
   cout<<ans1<<endl;
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