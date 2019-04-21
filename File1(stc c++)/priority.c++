/// priorty heap 
// priority heap is max heap by default
#include<bits/stdc++.h>
using namespace std;
int main()
{
priority_queue <int> prq; // max heap by default
prq.push(10);
prq.push(30);
prq.push(50);
prq.push(60);
prq.push(70);
while(!prq.empty())
{cout<<prq.top();
prq.pop();
}
return 0;
}
