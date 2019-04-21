// more feature  about the list
#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define n 7
#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
list<int> l;
list<int> :: iterator it;
int main()
{
for(int i=1;i<10;i++)
l.push_back(i);
for(it=l.begin();it!=l.end();it++)
cout<<*it; // at used as index for accessing list element
int p=l.front(); // return reference of front element of the list
int q=l.back(); // return reference of last element of the list
cout<<p<<cout<<q;


return 0;
}



/*
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list .
push_front(g) – Adds a new element ‘g’ at the beginning of the list .
push_back(g) – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces size of the list by 1.
pop_back() – Removes the last element of the list, and reduces size of the list by 1
list::begin() and list::end() in C++ STL– begin() function returns an iterator pointing to the first element of the list
end()– end() function returns an iterator pointing to the theoretical last element which follows the last element.
list rbegin() and rend() function in C++ STL– rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.
list cbegin() and cend() function in C++ STL– cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list.
list crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
*/
