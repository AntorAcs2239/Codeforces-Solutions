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
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    int alice=0,bob=0;
    int tem_a=0,tem_b=0;
    int k=1;
    int t=0;
    for(int i=1,j=n;i<=j;)
    {
        if(k%2==1)
        {
            t+=ar[i];
            if(t>tem_b)
            {
                alice+=t;
                tem_a=t;
                t=0;
                k++;
            }
             i++;
        }
        else 
        {
            t+=ar[j];
            if(t>tem_a)
            {
                
                bob+=t;
                tem_b=t;
                t=0;
                k++;
            }
            j--;
        }
    }
    //cout<<t<<endl;
    if(t>0)
    {
        if(k%2==1)alice+=t;
        else bob+=t;
    }
    else k--;
    cout<<k<<" "<<alice<<" "<<bob<<endl;
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
   // solve();
    return 0;
}