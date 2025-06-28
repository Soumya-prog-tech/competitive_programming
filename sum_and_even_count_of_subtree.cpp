#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 

const int N = 1e3 + 10;
vector<int>g[N];
vector<int> subtree_sum(N);
vector<int> even_ct(N);

void dfs(int vertex, int par=0) {
    /*
    Take action on vertex after entering the vertex
    */
   if(vertex % 2 == 0) {
    even_ct[vertex] ++;
   }
   subtree_sum[vertex] +=  vertex;
   for(auto child : g[vertex]) {
    if(child == par) continue;
     
      /*
      Take action on child before entering the child
      */
     dfs(child, vertex);
     /*
     Take action on child after exiting the child node
     */
    even_ct[vertex] += even_ct[child];
    subtree_sum[vertex] += subtree_sum[child];
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
        cout<<subtree_sum[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i<=n; i++) {
        cout<<even_ct[i]<<" ";
    }
}




int main() {
	int t = 1;
	// cin>>t;
	while(t--) {
		solve();
	}
}