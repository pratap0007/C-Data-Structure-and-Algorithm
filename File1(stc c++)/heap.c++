/*

Operations on heap :

1. make_heap() :- This function is used to convert a range in a container to a heap.

2. front() :- This function displays the first element of heap which is the maximum number

///
3. push_heap() :- This function is used to insert elements into heap. The size of the heap is increased by 1. New element is placed appropriately in the heap.

4. pop_heap() :- This function is used to delete the maximum element of the heap. The size of heap is decreased by 1. The heap elements are reorganised accordingly after this operation.


5. sort_heap() :- This function is used to sort the heap. After this operation, the container is no longer a heap.  === it will be in the ascending order

6. is_heap() :- This function is used to check whether the container is heap or not. Generally, in most implementations, the reverse sorted container is considered as heap. Returns true if container is heap else returns false.

6. is_heap_until() :- This function returns the iterator to the position till the container is the heap. Generally, in most implementations, the reverse sorted container is considered as heap.


*/
// building heap from vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v = { 3, 9, 6, 0, 12, 56, 45, 78, 45 };
make_heap(v.begin(),v.end()); // building heap by default max heap
//cout<<v.front(); // printing maximum element in heap

v.push_back(100); // pushing in vector
push_heap(v.begin(),v.end()); // reorder the rlrmrent

//pop_heap(v.begin(),v.end());    to deleeate max heap
cout<<v.front();
// for desplayinh heap element
for(int &x:v)
cout<<"  "<<x;
// for sorting heap element after sorting heap will no more longer max heap
//sort_heap(v.begin(),v.end());
return 0;
}

