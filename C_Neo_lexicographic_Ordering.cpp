#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
map<char,int>mp;
bool check(string c1,string c2)
{
    for(int i=0;i<min(c1.size(),c2.size());i++)
    {
        if(mp[c1[i]]<mp[c2[i]])return true;
        else if(mp[c1[i]]>mp[c2[i]])return false;
    }
    if(c1.size()>c2.size())return false;
    return true;
}
void solve()
{
   string s;
   cin>>s;
   vector<string>vec;
   int n;
   cin>>n;
   for(int i=0;i<s.size();i++)
   {
       mp[s[i]]=i+1;
   }
   for(int i=0;i<n;i++)
   {
       string s1;
       cin>>s1;
       vec.push_back(s1);
   }
   sort(vec.begin(),vec.end(),check);
   for(int i=0;i<n;i++)
   {
       cout<<vec[i]<<endl;
   }
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