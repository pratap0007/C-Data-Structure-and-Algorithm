
/*
 some usefull function of the map stl
  
   

*/

#include<bits/stdc++.h>
using namespace std;
#define mkp pair<int,int> 
int main()
{
// empty map container
map<int,int> mp;
/// inseeting element in the order
mp.insert(mkp(1,10));
mp.insert(mkp(9,20));
mp.insert(mkp(12,20));
mp.insert(mkp(4,20));
mp.insert(mkp(5,20));
map<int,int> :: iterator it;
for(it=mp.begin();it!=mp.end();it++)
cout<<it->first<<"   " <<it->second<<endl;

return 0;
}

