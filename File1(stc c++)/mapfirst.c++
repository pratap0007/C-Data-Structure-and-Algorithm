#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,int> mp;
int t,n,x;
cin>>n;
for(int i=0;i<n;i++)

{ cin>>x;
   mp[x]=i;


}
for(auto x : mp)
cout<<x.first<<"   "<<x.second<<endl;

return 0;
}
