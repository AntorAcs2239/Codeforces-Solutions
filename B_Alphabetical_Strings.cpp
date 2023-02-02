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
   string a;
   cin>>a;
   sort(a.begin(),a.end());
   map<int,char>mp;
   char ch='a';
   for(int i=0;i<=26;i++)
   {
       mp[i]=ch;
       ch++;
   }
   for(int i=0;i<a.size();i++)
   {
       char c=a[i];
       if(mp[i]!=c)
       {
           cout<<"NO"<<endl;
           return;
       }
   }
   cout<<"YES"<<endl;
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