#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
int howmany(string s,string t)
{
    int j=0;
    int c=0,count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[j])
        {
            j++;
            count++;
        }
        else if((s[i]!=t[j])&&(count!=t.size()))
        {
            if(s[i]==t[0])
            {
                j=1;
                count=1;
            }
            else 
            {
                j=0;
                count=0;
            }
        }
        if(count==t.size())
        {
            j=0;
            c++;
            count=0;
        }
    }
    return c;
}
void solve()
{
   string s;
   cin>>s;
   int count=0;
   for(int i=0;i<s.size();i++)
   {
       if(s.substr(i,5)=="Danil")count++;
       if(s.substr(i,4)=="Olya")count++;
       if(s.substr(i,5)=="Slava")count++;
       if(s.substr(i,3)=="Ann")count++;
       if(s.substr(i,6)=="Nikita")count++;
   }
       if(count==1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
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