#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int>vec;
    vec.push_back(10);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(16);
    vec.push_back(16);
    sort(vec.begin(),vec.end());
    auto a=upper_bound(vec.begin(),vec.end(),15)-vec.begin();
    auto b=lower_bound(vec.begin(),vec.end(),15)-vec.begin();
    cout<<a<<endl;
    cout<<b<<endl;
    // 1000
    // 1001
    // 1002
    // 1003
    // 1005
}
int main()
{
    solve();
    return 0;
}