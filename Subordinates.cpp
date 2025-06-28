#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 
const int N = 2*1e5 + 10;
vector<int>graph[N];
vector<int>so(N);
bool vis[N];

void dfs(int vertex) {
    vis[vertex] = true;
    for(auto child : graph[vertex]) {
        if(vis[child]) continue;
        so[vertex]++;
        dfs(child);
        so[vertex] += so[child];
    }
}

void solve() {

    int n;
    cin>>n;
    for(int i = 2; i<=n; i++) {
        int a;
        cin>>a;
        graph[a].push_back(i);
        graph[i].push_back(a);
    }
    for(int i = 1; i<=n; i++) {
        if(vis[i]) continue;
        dfs(i);
    }
    for(int i = 1; i<=n; i++) {
        cout<<so[i]<<" ";
    }
}




int main() {
	int t = 1;
	// cin>>t;
	while(t--) {
		solve();
	}
}