//  finding out the articulate point in the graph
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define fori(i,a,b) for(int i=int(a);i<int(b);i++) //  difining micros for loop
int main()
{
int v,n,e,a,b,i,j,ap=0;
cout<<"enter the number of vertices and edges in the graph"<<endl
cin>>n>>e;;  // considering initialy the graph  containing only one component 

m[n][n];   // counting node from 0
for(int i=0;i<v;i++)
for(int j=0;j<v;j++)
m[i][j]=0;

for(int i=0;i<e;i++)
{
cout<<"enter the 2 vertices of given edges in the graph - ";  //  vertex counting from 0
cin>>a>>b;
m[a][b]=1;
m[b][a]=1;

}
for(int i=0;i<n;i++)
{




}

   


//  for finding out the number of articulate point in graph



return 0;
}
