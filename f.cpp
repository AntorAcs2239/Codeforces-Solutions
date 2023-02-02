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
    string m;
    cin>>m;
    int n;
    cin>>n;
    vector<int>vec;
    map<char,int>mp;
    for(int i=0;i<m.size();i++)
    {
        mp[m[i]]=1;
    }
    for(int k=1;k<=n;k++)
    {
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(int i=0;i<s.size();i++)
        {
            if(i<m.size()&&s[i]!=m[i])
            {
                 c1++;
                 if(s[i]=='l'||s[i]=='j'||s[i]=='!')
               {
                    if(m[i]=='l'||m[i]=='j'||m[i]=='!')
                    {
                        c2++;
                    }
             } 
            //{a,@,O,o,D,0,e}
            if(s[i]=='@'||s[i]=='a'||s[i]=='0'||s[i]=='o'||s[i]=='D'||s[i]=='O'||s[i]=='e')
            {
                    if(m[i]=='@'||m[i]=='a'||m[i]=='0'||m[i]=='o'||m[i]=='O'||m[i]=='e'||m[i]=='D')
                    {
                         c2++;
                    }
            }
            //{s,S,5,2}
            if(s[i]=='s'||s[i]=='S'||s[i]=='5'||s[i]=='2')
            {
                    if(m[i]=='s'||m[i]=='S'||m[i]=='5'||m[i]=='2')
                    {
                        c2++;
                    }
            }
           // {1,i,?}
            if(s[i]=='1'||s[i]=='i'||s[i]=='?')
            {
                    if(m[i]=='1'||m[i]=='i'||m[i]=='?')
                    {
                       c2++;
                    }
            }
            }
         }
           if((c1==c2)&&(c1>0&&c2>0)&&(m.size()==s.size())||(m==s))
            {
                vec.push_back(k);
            }
    }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
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