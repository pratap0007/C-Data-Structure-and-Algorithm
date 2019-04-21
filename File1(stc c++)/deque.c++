/*
  clear expanstion              
Double ended queues are sequence containers with the feature of expansion and contraction on both the ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements at the end, and also the beginning. Unlike vectors, contiguous storage allocation may not be guaranteed.

======The functions for deque are same as vector, with an addition of push and pop operations for both front and back.


*/
#include<bits/stdc++.h>
using namespace std;
#include<deque>
int main()
{
deque <int> deq;  /// addition and removal can be done fron both sides

deque <int> :: iterator it;

deq.push_back(100);
deq.push_back(200);
deq.push_back(300);
deq.push_back(400);
deq.push_front(1000);
for(it=deq.begin();it!=deq.end();++it)
cout<<'\t'<<*it;
cout<<deq.size();
cout<<"   "<<deq.front()<<deq.back();



return 0;
}

