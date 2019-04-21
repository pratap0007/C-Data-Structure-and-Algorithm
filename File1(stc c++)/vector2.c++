#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define n 7
#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
int main()
{
vector<int> v;
v.assign(7,100); // assigning 7 element with 100
v.insert(v.begin(),1000); //inserting 1000 at the begining
for(int i=0;i<v.size();i++)
cout<<v[i];
v.erase(v.begin());
v.clear();
cout<<"               ";
for(int i=0;i<v.size();i++)
cout<<v[i];
vector<int> v1,v2;
v1.push_back(78);

v1.push_back(88);v2.push_back(108);v2.push_back(118);
v1.swap(v2); // for swappinng two vector with having same size only
for(int j=0;j<v1.size();j++)
cout<<v1[j];
cout<<endl;
for(int j=0;j<v2.size();j++)
cout<<v2[j];
return 0;
}
