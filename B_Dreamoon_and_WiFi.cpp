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
void solve()
{
    string a,b;
    cin>>a>>b;
    int suma=0,sumb=0;
    int q=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='+')suma++;
        else suma--;
        if(b[i]=='+')sumb++;
        else if(b[i]=='-')sumb--;
        else q++;
    }
    int n=pow(2,q);
    double ans=0;
    for(int i=0;i<n;i++)
    {
        string s=bin(i,q-1);
        int t=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')t++;
            else t--;
        }
        if((t+sumb)==suma)ans++;
    }
    double x=(double)(ans/n);
    cout<<fixed<<setprecision(12)<<x<<endl;
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