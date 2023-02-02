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
   string fin;
   for(int i=0;i<n;i++)
   {
       int t=a[i]-'0';
       if(t==2||t==3||t==5||t==7)fin+=a[i];
       else if(t==9)
       {
           string t="3327";
           fin+=t;
       }
       else if(t==8)
       {
           string t="2227";
           fin+=t;
       }
       else if(t==6)
       {
           string t="53";
           fin+=t;
       }
       else if(t==4)fin+="223";
   }
   sort(fin.begin(),fin.end());
   for(int i=fin.size()-1;i>=0;i--)cout<<fin[i];
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