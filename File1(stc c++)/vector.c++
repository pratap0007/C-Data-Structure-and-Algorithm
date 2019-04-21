#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define n 7
#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
int main()
{
 vector<int> v1;
FOR(i,1,8)
v1.push_back(i);
for(int i=0;i<7;i++)
cout<<v1[i];
v1.push_back(100);
int *x=v1.data(); // return pointer of first element
cout<<*x;
return 0;
}
/*
    assign() – It assigns new value to the vector elements by replacing old ones
    push_back() – It push the elements into a vector from the back
    pop_back() – It is used to pop or remove elements from a vector from the back.
    insert() – It inserts new elements before the element at the specified position
    erase() – It is used to remove elements from a container from the specified position or range.
    swap() – It is used to swap the contents of one vector with another vector of same type and size.
    clear() – It is used to remove all the elements of the vector container
    emplace() – It extends the container by inserting new element at position
    emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector



 vectorname.erase(position)
2. vectorname.erase(startingposition, endingposition)
    .*/
