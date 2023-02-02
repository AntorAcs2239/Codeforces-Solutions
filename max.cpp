#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int A=10,B=20,C=30;
   int Maximum;
   Maximum=max(A,B);
   cout<<"Maximum of two value: "<<Maximum<<endl;
   Maximum=max(A,max(B,C));
   cout<<"Maximum of more than two value:"<<Maximum<<endl;
   Maximum=max({A,B,C});
   cout<<"Maximum of more than two value:"<<Maximum<<endl;
} 
int main()
{
    solve();
    return 0;
}