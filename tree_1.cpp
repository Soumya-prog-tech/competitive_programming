#include<bits/stdc++.h>
using namespace std;

/* Adjacent Matrix 
make a 2d matrix of (no. of vertices) * (no. of vertices)
Space complexity is very high 
we can know if i, j are connected and the weight in O(1)
*/
 
/* 
Adjaceny list 
we make a list of the number of vertices. 
In each list we store child of vertices. 
we need O(n) operation to find if i and j are connected and the weight 
*/

cons t int N = 1e3;
int graph1[N][N];
vector<int> graph2[N];

int main() {


     int n, m;
     cin>>n>>m;
     
     for(int i = 0; i<m; i++) {
        int v1, v2;
        cin>>v1>>v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
     }

}