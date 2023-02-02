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
   s1="BGR";
   int ans;
   string ans1;
   int tem=INT_MAX;
   do
   {
       string x;
       int count=0;
       for(int i=0;i<n;i++)
       {
           x+=s1[i%3];
           if(x[i]!=a[i])count++;
       }
       if(count<tem)
       {
           ans=count;
           ans1=x;
           tem=count;
       }
   }while(next_permutation(s1.begin(),s1.end()));
   cout<<ans<<endl;
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