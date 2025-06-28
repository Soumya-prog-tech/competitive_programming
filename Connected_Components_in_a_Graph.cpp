#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 

const int N = 1e3 + 10;
vector<int>g[N];
bool vis[N];

void dfs(int vertex) {
    /*
    Take action on vertex after entering the vertex
    */
    vis[vertex] = true;
   for(auto child : g[vertex]) {
    if(vis[child]) continue;
      /*
      Take action on child before entering the child
      */
     dfs(child);
     /*
     Take action on child after exiting the child node
     */
   }
   /*
   Take action on vertex before exiting the vertex
   */
}

int main() {
    int n, m;
    cin>>n>>m;
    for(int i = 0; i<m; i++) {
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int ans = 0;
    for(int i = 1; i<=n; i++) {
        if(vis[i]) continue;
        dfs(i); 
        ans++;
    }
    cout<<ans<<endl;
}