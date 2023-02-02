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
   map<char,int>mp;
   for(int i=0;i<s.size();i++)
   {
       mp[s[i]]++;
       if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9')
       {
           cout<<"1"<<endl;
           cout<<s[i]<<endl;
           return;
       }
   }
   for(auto a:mp)
   {
       if(a.second>1)
       {
           cout<<"2"<<endl;
           cout<<a.first<<a.first<<endl;
           return;
       }
   }
   if(sear(s,"25"))
   {
       cout<<"2"<<endl;
       cout<<"25"<<endl;
   }
   else if(sear(s,"27"))
   {
         cout<<"2"<<endl;
       cout<<"27"<<endl;
   }
    else if(sear(s,"35"))
   {
         cout<<"2"<<endl;
       cout<<"35"<<endl;
   }
    else if(sear(s,"57"))
   {
         cout<<"2"<<endl;
        cout<<"57"<<endl;
   }
   else if(sear(s,"52"))
   {
         cout<<"2"<<endl;
        cout<<"52"<<endl;
   }
   else if(sear(s,"72"))
   {
         cout<<"2"<<endl;
        cout<<"72"<<endl;
   }
   else if(sear(s,"75"))
   {
         cout<<"2"<<endl;
        cout<<"75"<<endl;
   }
    else if(sear(s,"32"))
   {
         cout<<"2"<<endl;
        cout<<"32"<<endl;
   }
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