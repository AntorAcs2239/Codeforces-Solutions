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
   int w,h;
   cin>>w>>h;
   char ar[w][h];
   for(int i=0;i<w;i++)
   {
       for(int j=0;j<h;j++)cin>>ar[i][j];
   }
   int row=-1,col=-1;
   for(int i=0;i<w;i++)
   {
       bool flag=false;
       for(int j=0;j<h;j++)
       {
           int count=0;
           if(ar[i][j]=='*')count++;
           if((j+1)<h&&ar[i][j+1]=='*')count++;
           if((j-1)>=0&&ar[i][j-1]=='*')count++;
           if((i-1)>=0&&ar[i-1][j]=='*')count++;
           if((i+1)<w&&ar[i+1][j]=='*')count++;
           if(count==5)
           {
               flag=true;
               row=i;
               col=j;
               break;
           }
       }
       if(flag)break;
   }
   if(row==-1)
   {
       cout<<"NO"<<endl;
       return;
   }
   for(int i=col;i>=0;i--)
   {
       if(ar[row][i]=='*')
       {
           ar[row][i]='A';
       }
       else break;
   }
   for(int i=col+1;i<h;i++)
   {
       if(ar[row][i]=='*')ar[row][i]='A';
       else break;
   }
   for(int i=row-1;i>=0;i--)
   {
       if(ar[i][col]=='*')ar[i][col]='A';
       else break;
   }
   for(int i=row+1;i<w;i++)
   {
       if(ar[i][col]=='*')ar[i][col]='A';
       else break;
   }
    for(int i=0;i<w;i++)
   {
       for(int j=0;j<h;j++)
       {
           if(ar[i][j]=='*')
           {
               cout<<"NO"<<endl;
               return;
           }
       }
   }
   cout<<"YES"<<endl;
  // cout<<row<<" "<<col<<endl;
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