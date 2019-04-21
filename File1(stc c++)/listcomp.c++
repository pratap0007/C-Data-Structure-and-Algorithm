// find outhow many common element are in 2 lists
//O(nlogn)
#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
set<int> s;
int fun(int r)
{
   auto d=s.find(r);
   if(d!=s.end())
		return 1;
	else
		return 0;
}

int main()
{
int i,a[100],b[100],k,j;

loop(i,0,8)
cin>>a[i];
loop(i,0,8);
cin>>b[i];

//set<int> :: iterator pp;
loop(i,0,8)
s.insert(a[i]);
for(auto i:s)
cout<<" "<<i;
int c=0;
loop(j,0,8)
{
if(s.count(b[j])==1)
{
c++;
}
}
cout<<c;

return 0;
}
