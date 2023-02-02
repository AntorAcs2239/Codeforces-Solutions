#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
int first[100000];
int origin[100000];
int second[100000];
bool issorted(int ar[],int s)
{
    for(int i=1;i<s;i++)
    {
        if(ar[i]>ar[i+1])return false;
    }
    return true;
}
void operation1(int ar[],int s)
{
    for(int i=1;i<s;i+=2)
    {
        swap(ar[i],ar[i+1]);
    }
}
void operation2(int ar[],int s)
{
    for(int i=1;i<=s/2;i++)
    {
       swap(ar[i],ar[(s/2)+i]);
    }
}
bool isorigin(int ar[],int s)
{
    for(int i=1;i<=s;i++)
    {
        if(origin[i]!=ar[i])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        cin>>origin[i];
        first[i]=origin[i];
        second[i]=origin[i];
    }
    int step1=-1,step2=-1,count1=0,count2=0;
    for(int i=1;;i++)
    {
        if(issorted(first,2*n))
        {
            break;
        }
        if(i%2==1)
        {
            operation1(first,2*n);
        }
        else operation2(first,2*n);
         if(isorigin(first,2*n))
        {
            step1=0;
            break;
        }
        count1++;
    }
    for(int i=1;;i++)
    {
        if(issorted(second,2*n))
        {
            break;
        }
        if(i%2==1)
        {
            operation2(second,2*n);
        }
        else operation1(second,2*n);
         if(isorigin(second,2*n))
        {
            step2=0;
            break;
        }
        count2++;
    }
    if(step1==0&&step2==0)cout<<"-1"<<endl;
    else cout<<min(count1,count2)<<endl;
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