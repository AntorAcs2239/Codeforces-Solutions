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
  if(n>=0&&n<40)
  {
      cout<<40-n<<endl;
  }
  else if(n>=40&&n<70)
  {
      cout<<70-n<<endl;
  }
  else if(n>=70&&n<90)
  {
      cout<<90-n<<endl;
  }
  else
  {
      cout<<"expert"<<endl;
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