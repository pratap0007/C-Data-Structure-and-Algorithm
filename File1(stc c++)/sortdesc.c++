#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f first
#define s second
#define mp make_pair
//typedef pair<int,int>> pi;
#define fori(i,a,b)  for(int i=int(a);i<int(b);i++)
int main()
{

int a[]={2,-9,-56,89,0,5,7,2 };
int i,t=8;
sort(a,t+a,greater<int>());
fori(i,0,t)
cout<<"  "<<a[i];
return 0;
}
