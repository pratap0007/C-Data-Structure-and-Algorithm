#include<bits/stdc++.h>
using namespace std;
#include<unordered_set>
int main()
{
unordered_set <int> ux;
ux.insert(1);
ux.insert(2);
ux.insert(3);
ux.insert(1);
cout<<ux.find(1);


return 0;
}
