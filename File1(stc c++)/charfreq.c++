#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<char, int> mp;
	string s;
	cin>>s; // work fine for string contains no black spaces
	for(char c : s)  // for coutning character frequency in given sting
	{
	  mp[c]++; // maping char to int in O(LOGN) time 
	}
for(char c : "abcdefghijklmnopqrstuvwxyz")
cout<<c<<"  "<<mp[c]<<endl;  // counting freq uency of char 'a' and 's' in O(LOGN) time only
return 0;
}
