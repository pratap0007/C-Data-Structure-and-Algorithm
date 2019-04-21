#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
vector<int*> p;
int a[]={1,2,3,4,5};
for(int i=0;i<5;i++)
p.push_back((a+i));
for(int i=0;i<5;i++)
cout<<p[i]<<"  ";
return 0;
}
