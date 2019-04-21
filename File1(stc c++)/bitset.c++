/*
A bitset is an array whose each value is either 0 or 1. For example, the following
code creates a bitset that contains 10 elements:

*/
#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
int main()
{
bitset<20> s(string("011000101")); // bitset for 20 element from right to left
//string s="0010101010";
cout<<s.count();  //  it count number of 1's in bitset

return 0;


}
