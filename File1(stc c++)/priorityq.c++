/*

Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the queue and elements are in non decreasing order(hence we can see that each element of the queue has a priority{fixed order}).
 

https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/


pop() function deletes the first element of the queue
*/
#include<bits/stdc++.h>
using namespace std;
#include<queue>
int main()
{
priority_queue <int> prq;
prq.push(3);

prq.push(9);

prq.push(0);

prq.push(300);
for(auto x : prq)
cout<<x<<" ";
//while(prq.empty()!=0)

return 0;
}
