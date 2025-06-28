#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 

const int N = 1e3 + 10;
vector<int>g[N];
vector<int>d(N);
vector<int>h(N);

void dfs(int vertex, int par=0) {
    /*
    Take action on vertex after entering the vertex
    */
   for(auto child : g[vertex]) {
    if(child == par) continue;
     h[child] = h[vertex] + 1;
      /*
      Take action on child before entering the child
      */
     dfs(child, vertex);
     /*
     Take action on child after exiting the child node
     */
    d[vertex] = max(d[vertex], d[child] + 1);
   }
   /*
   Take action on vertex before exiting the vertex
   */
}

void solve() {

    int n;
    cin>>n;
    for(int i = 1;i<=n-1; i++) {
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    for(int i = 1; i<=n; i++) {
        cout<<h[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i<=n; i++) {
        cout<<d[i]<<" ";
    }
}




int main() {
	int t = 1;
	// cin>>t;
	while(t--) {
		solve();
	}
}