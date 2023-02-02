#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define endl '\n'
long long l,r;
long long ans(long long s)
{
	long long x = sqrt(s);
	long long ans = x;
	if (x * (x + 1) > s)
		x--;
	ans += x;
	if (x * (x + 2) > s)
		x--;
	ans += x;
	return ans;
}
void solve()
{
	 l, r;
	cin >> l >> r;
	cout << ans(r) - ans(l - 1) << endl;
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
	//  solve();
	return 0;
}