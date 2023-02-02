#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
string binary(int n)
{
    string t;
    while(n!=0)
    {
        if(n%2==0)t+='0';
        else t+='1';
        n=n/2;
    }
     if(t.size()<10)
    {
        int s=t.size();
        for(int i=1;i<=10-s;i++)t+='0';
    }
    reverse(t.begin(),t.end());
    return t;
}
string gray(string s)
{
    string g;
    g+=s[0];
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=s[i+1])g+='1';
        else g+='0';
    }
    return g;
}
void solve()
{
    for(int i=1;i<=100;i++)
    {
        string t=binary(i);
        cout<<i<<"->"<<t<<"->"<<gray(t)<<endl;
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}