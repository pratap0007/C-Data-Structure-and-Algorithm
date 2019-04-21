#include <bits/stdc++.h> 
using namespace std; 
#include<array>
  
int main() 
{

//initializing array element in c++
array<int,8> ar = {1,2,3,4,5,6,7,8};
for(int i=0;i<8;i++)
cout<<ar.at(i);
cout<<"  "<<ar.front()<<ar.back();

 
    return 0;
}
