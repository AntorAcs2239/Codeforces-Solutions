#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class student
{
    public:
    string name;
    int roll,batch;
    double cgpa;
    void getdetails()
    {
        cout<<name<<" "<<roll<<" "<<batch<<" "<<cgpa<<endl;
    }
    void input()
    {
        cin>>name>>roll>>batch>>cgpa;
    }
};
bool fun(pair<int,int>p1,pair<int,int>p2)
{
   if(p1.first<p2.first)return true;
   if(p1.second>p2.second)return true;
   else return false;
}
bool cmp(student s1,student s2)
{
    if(s1.batch<s2.batch)return true;
    if(s1.roll<s2.roll)return true;
    else return false;
}
void solve()
{
   map<string,vector<student>,greater<string>>mp;
   for(int i=1;i<=3;i++)
   {
       string key;
       int nos;
       cin>>key>>nos;
       student st;
       for(int i=0;i<nos;i++)
       {
           st.input();
           mp[key].push_back(st);
       }
   }
   for(auto a:mp)
   {
       cout<<a.first<<endl;
       auto vec=a.second;
       sort(vec.begin(),vec.end(),cmp);
       for(auto x:vec)
       {
           x.getdetails();
       }
       cout<<endl;
   }
}
int main()
{
    solve();
    return 0;
}