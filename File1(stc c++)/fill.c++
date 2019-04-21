// 2 d vector in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,i,j,m,a,b,k,max=0;
cin>>n>>m;
long long int ar[n+2]={0};
while(m--)
{
cin>>a>>b>>k;
ar[a]=ar[a]+k;
ar[b+1]=(ar[b+1]-k);
}
for(i=1;i<n+2;i++)
ar[i]=ar[i-1]+ar[i];
for(i=1;i<n+2;i++)
{
   if(ar[i]>max)
   max=ar[i];
}
cout<<max;
return 0;
}
