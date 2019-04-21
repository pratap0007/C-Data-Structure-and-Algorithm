/*C++ also contains the structures multiset and unordered_multiset that other-
wise work like set and unordered_set but they can contain multiple instances of
an element. For example, in the following code all three instances of the number
5 are added to a multiset:


*/
#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
int main()
{

multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
cout<<s.count(5);
//for(auto x : s)  // iterating set/vector elements
//cout<<x;
s.erase(s.find(5));  // for irasing only one element
cout<<s.count(5);
s.erase(5);   // erasing all element of vector
cout<<"++++"<<s.count(5);


return 0;
}
