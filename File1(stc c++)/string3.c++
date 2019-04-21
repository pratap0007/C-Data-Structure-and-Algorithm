#include<bits/stdc++.h>
using namespace std;
void fun(string s)
{
   int x=s.length(),sum=0;
cout<<x<<endl;
for(int i=0;i<x;i++){
  for(int j=0;j<=x-i;j++)
  
    {
         
     //sum+=int(s.substr(i,j)-'0');
  {  cout<<"  "<<s.substr(i,j);
sum++;}
}


cout<<endl;
}
 cout<<"sum=="<<sum; 

}
int main()
{

string str;

getline(cin,str);
for(int i=0;i<str.length();i++) cout<<str[i]<<"   ";
fun(str);


string s="ashiv pratap verma";
cout<<"----"<<s.find("a")<<endl;///  
//cout<"    "<<s.find_first_of("a")<<endl;
cout<<"    "<<s.find_last_of("aa")<<endl;


cout<<s.substr(1,1);  ///  substr(startposition, last position)   for finding out the substring




return 0;
}
