#include<bits/stdc++.h>
using namespace std;
void sum(int ar[],int i,int n,int s)
{
    if(i>=n)
    {
        cout<<"\nSum: "<<s<<endl;
        return;
    }
    cout<<ar[i]<<" ";
    if(ar[i]%3==0)
    {
        sum(ar,i+1,n,s+ar[i]);
    }
    else sum(ar,i+1,n,s);
}
int sum2(int n)
{
    if(n==0)return 0;
    else{
        return n+sum2(n-1);
    } 
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sum(ar,0,n,0);
    cout<<sum2(n);
    return 0;
}