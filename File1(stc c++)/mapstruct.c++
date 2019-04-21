// map  structure 
/*
A map is a generalized array that consists of key-value-pairs. While the keys in
an ordinary array are always the consecutive integers 0, 1, . . . , n − 1, where n is
the size of the array, the keys in a map can be of any data type and they do not
have to be consecutive values.
The C++ standard library contains two map implementations that correspond
to the set implementations: the structure map is based on a balanced binary tree
and accessing elements takes O (log n ) time, while the structure unordered_map
uses hashing and accessing elements takes O (1) time on average.

*/

#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
int main()
{

multimap<string,int> ml;
ml["ab"]=4;
ml["ac"]=6;
ml["ad"]=9;
ml["ae"]=10;
cout<<ml["ae"]<<"\n";
for(auto x: ml)
{
cout<<x.first<<" -- "<<x.second<<endl;
}
return 0;
}
