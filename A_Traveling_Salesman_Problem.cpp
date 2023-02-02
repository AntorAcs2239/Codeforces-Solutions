#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int>ar1,ar2,br1,br2;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0)
        {
           if(y>0)ar1.push_back(y);
           else ar2.push_back(y);
        }
        else
        {
            if(x>0)br1.push_back(x);
            else br2.push_back(x);
        }
    }
    sort(ar1.begin(),ar1.end());
    sort(ar2.begin(),ar2.end());
    sort(br1.begin(),br1.end());
      sort(br2.begin(),br2.end());
      int t1=0,t2=0;
      if(ar1.size()>0)
      {
        t1+=ar1[ar1.size()-1];
      }
      if(ar2.size()>0)t1+=abs(ar2[0]);
      if(br1.size()>0)
      {
        t2+=br1[br1.size()-1];
      }
      if(br2.size()>0)t2+=abs(br2[0]);
      cout<<(t1*2)+(t2*2)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}