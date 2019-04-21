/*
11. copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.

12. swap() :- This function swaps one string with other.



*/
// string class in c++
/// using of string class n c++
//        #include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
#include<string>
//#include<cstdio>  //for gets() function
void comp(string,string);
int main()
{
char ch[11];
string s1,s2;
string s3="";
getline(cin,s1);
getline(cin,s2);
//comp(s1,s2);
s3+=s1;
s3+=s2;
cout<<s3;
s3.push_back('x'); // adding a character to string in the last
//s3.pop_back();   // removing last charater in string
s3.copy(ch,3,2); // (character array, numberof character required,starting address)  copying first 10 character into character of array
cout<<'\t'<<ch;
return 0;
}
void comp(string s1,string s2)
{
   if(s1==s2)
	cout<<"equal";
	else if(s1>s2)
	cout<<"s1>s2";
	else if(s1<s2)
	cout<"s1<s2";



}
