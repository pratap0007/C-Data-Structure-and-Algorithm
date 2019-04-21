//Forward list in stl implement singly linked list/////////////////
/*
forward list are useful than other container in insertion,removal and moving operation.
**===and allow time constant insertion Thursday 14 February 2019 12:28:33 AM IST adn removal of element.
it differs from list by the fact that forwar list keeps track of location of only location of only next element while list keep track to both next and previous elements,

**===the drawback of forward list is that it can not be iterated backward and its individual element can not be accessed directly.

++++++===forward list preferedonly when only forwardtraversal is required .

================= operation on forward list=============
forward_list<int> flist1;
first.assign({1,2,3,4,5}); /// assigning of value using assign()
 insert_after() 
This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.
 


. erase_after() This function is used to erase elements from a particular position in the forward list.
*/

#include<bits/stdc++.h>
#include<forward_list>  
using namespace std; 
int main()
{
forward_list<char> list1;
list1.assign({'a','b','c','d','e','f','g','h'});
list1.push_front('z');
for(char &a: list1)
cout<<a<<"  ";
list1.pop_front();
for(char &xx: list1)
cout<<xx<<"  ";

return 0;
}
