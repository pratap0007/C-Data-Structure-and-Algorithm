/*

Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.
 
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)


*/
#include<bits/stdc++.h>
using namespace std;
#include<stack>
int main()
{
stack <int> s;
s.push(40);
s.push(50);
s.push(60);
s.push(70);
s.push(80);
cout<<s.top()<<" "<<s.size();
while(s.empty()==0)
{
  cout<<'\t'<<s.top();
s.pop();

}
return 0;
}
