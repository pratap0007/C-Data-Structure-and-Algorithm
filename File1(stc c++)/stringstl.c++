#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define loop(i,a,b) for(int i=int(a);i<int(b);i++)

int main()
{
vector <string> vc;
string s;
loop(i,4,10)
cout<<i;
loop(i,0,4)
{
cin>>s;
vc.push_back(s);
}
loop(i,0,4)
cout<<vc[i];



return 0;
}
