/*
Pair is used to combine together two values which may be different in type. Pair provides a way to store two heterogeneous objects as a single unit. 
-----pair  g4(g3);    //copy of g3


----make_pair() : This template function allows to create a value pair without writing the types explicitly.

=== two pair can be compare using logical operation

======pair1.swap(pair2) ;  // swapping content of pair to each other


pair p1(p2) // copying pair from p2 to pair p1

/// pair <int,int>  p[10000]; /// like vector 
for accessing element p[i].first 
 and for decond element p[i].second
*/
#include<bits/stdc++.h>
using namespace std;
#include<utility>
int main()
{
  int g;
	string s;
  pair <string ,int> p ("shiv pratap",22);
//cout<<p.first;   // for first value used first
//cout<<p.second;  // for second value used second

//pair <string,int> p1;
//pair p1(p); // copying of p to p1
//cout<<p1.first;
pair=make_pair("verma",7);
return 0;

}
