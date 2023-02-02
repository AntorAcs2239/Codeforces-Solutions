#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
   string s;
   cin>>s;
   string p,q;
   p+=s[0],p+=s[1];
   q+=s[3],q+=s[4];
   int a=stoi(p);
   int b=stoi(q);
   b++;
   while(1)
   {
       string x;
       if(b==60)
       {
           b=0;
           a++;
       }
       if(a==24)a=0;
        if(a<10)
       {
           x+='0';
           x+=a+'0';
       }
       else x+=to_string(a);
       if(b<10)
       {
           x+='0';
           x+=b+'0';
       }
       else x+=to_string(b);
       if((x[0]==x[3])&&(x[1]==x[2]))
       {
           cout<<x[0]<<x[1]<<":"<<x[2]<<x[3]<<endl;
           return;
       }
       b++;
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
}