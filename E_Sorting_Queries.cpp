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
   int n;
   cin>>n;
   multiset<ll>st;
   deque<ll>vec;
   for(int i=1;i<=n;i++)
   {
       ll a,b,c;
       cin>>a;
       if(a==1)
       {
           cin>>c;
           vec.push_back(c);
       }
       else if(a==3)
       {
           for(auto a:vec)
           {
               st.insert(a);
           }
           vec.clear();
       }
       else 
       {
           if(!st.empty())
           {
               cout<<(*st.begin())<<endl;
               st.erase(st.begin());
           }
           else 
           {
               cout<<vec.front()<<endl;
               vec.pop_front();
           }
       }
   }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}