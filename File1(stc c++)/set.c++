/*
Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element.

element can be in any of order
*/
#include<bits/stdc++.h>
//#include<set>
using namespace std;
#define ll long long int
#include<vector>
#define loop(i,a,b) for(int i=int(a);i<int(b);i++)

int main()
{
vector <string> vc;

string s="";
char h;
set<char , greater <char> > st;// empty set container space should be consederable
set<char , greater <char> > :: iterator it;
loop(i,1,10)
{cin>>h;
st.insert(h);
}
for(it=st.begin();it!=st.end();it++)
{
cout<<*it;
s=s+*(it);
}
cout<<s;
/*ll a;
cin>>a;
cout<<a;
loop(i,1,4)
cout<<(32 >> (i));
*/
return 0;
}
