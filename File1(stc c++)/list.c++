/*Lists are sequence containers that allow non-contiguous memory allocation. As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick. Normally, when we say a List, we talk about doubly linked list. For implementing a singly linked list, we use forward list.//
*/

#include<bits/stdc++.h>
using namespace std;

void show(list <int> g)
{
list <int> :: iterator it;
for(it=g.begin();it!=g.end();it++)
cout<<'\t' <<*it;

}
int main()
{
list <int> list1,list2;
for(int i=0;i<6;i++)
{

list1.push_back(i*2);
list2.push_front(i*5);
}
list1.push_front(440);
list2.push_back(666);
//list1.erase(list1.begin(),list1.end());
//list2.erase(list2.begin(),list2.end());   for erasing the list eraser(1,10);
show(list1);
show(list2);

return 0;
}
