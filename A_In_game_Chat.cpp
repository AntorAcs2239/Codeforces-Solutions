#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
string bin(int n,int l)
{
    string tem;
    int k,c;
     for (c = l; c >= 0; c--)
    {
    k = n >> c;

    if (k & 1)
      tem+='1';
    else
      tem+='0';
   }
   return tem;
}
bool sear(string s,string t)
{
    int c=0;
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[j])
        {
            c++;
            j++;
        }
        if(c==2)return true;
    }
    return false;
}
void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int t=0;
   for(int i=n-1;i>=0;i--)
   {
       if(s[i]==')')t++;
       else break;
   }
   int tem=n-t;
   if(t>tem)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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