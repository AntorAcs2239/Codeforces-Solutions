#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define pc __builtin_popcountll

#define MP make_pair
#define INF (int)1e9
#define EPS 1e-9
const double pi=acos(-1.0);

ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
int main()
{
    vector<int>vec;
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(2);
    sort(all(vec));
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int a[10000],pre[10000];
int countsum(int l,int r,int sz)
{
    int sum=0;
    while(l<r && l%sz!=0)
    {
        sum+=a[l];
        l++;
    }
    while((l+sz)<=r)
    {
        sum+=pre[l/sz];
        l+=sz;
    }
    while(l<=r)
    {
        sum+=a[l];
        l++;
    }
    return sum;
}
void update(int val,int id,int sz)
{
    int x=id/sz;
    pre[x]-=a[id];
    pre[x]+=val;
    a[id]=val;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr_seg=-1;
    int seg_size=sqrt(n);
    for(int i=0;i<n;i++)
    {
        if(i%seg_size==0)
        {
            curr_seg++;
        }
        pre[curr_seg]+=a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,val,id;
        cin>>l>>r>>val>>id;
        int sum=countsum(l,r,seg_size);
        cout<<sum<<endl;
        update(val,id,seg_size);
    }
    return 0;
}