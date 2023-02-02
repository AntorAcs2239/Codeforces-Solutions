#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
int binarysearch(int ar[],int n,int x)
{
   int low=0;
   int high=n-1;
   int mid;
   while (low<high)
   {
       mid=(low+high)/2;
       if((x-ar[mid])>0)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
   return mid;
}
void solve()
{
   int n;
   cin>>n;
   int ar[n];
   int br[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   for(int i=0;i<n;i++)cin>>br[i];
   vector<int>vec;
   vector<int>ve;
   int zero=0;
   set<int>st;
   for(int i=0;i<n;i++)
   {
       vec.push_back(br[i]-ar[i]);
       if(br[i]-ar[i]<0)
       {
           cout<<"NO"<<endl;
           return;
       }
       if(br[i]==ar[i])zero++;
       st.insert(br[i]-ar[i]);
   }
   if(st.size()==1)
   {
       cout<<"YES"<<endl;
   }
   else if(st.size()>2)
   {
       cout<<"NO"<<endl;
   }
   else if(zero==0)
   {
       cout<<"NO"<<endl;
   }
   else 
   {
       int count=0;
       for(int i=1;i<n;i++)
       {
           if(vec[i]!=vec[i-1])
           {
               count++;
           }
       }
       if(count==1||count==0)
       {
           cout<<"YES"<<endl;
       }
       else if(count==2&&(vec[0]==0&&vec[n-1]==0))cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
}