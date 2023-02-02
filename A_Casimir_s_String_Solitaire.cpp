#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
  string s;
  cin>>s;
 int a=0,b=0,c=0;
 for(int i=0;i<s.size();i++)
 {
     if(s[i]=='A')a++;
     else if(s[i]=='B')b++;
     else c++;
 }
 if(b==0)
 {
     cout<<"NO"<<endl;
     return;
 }
 b-=a;
 b-=c;
 if(b==0)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}