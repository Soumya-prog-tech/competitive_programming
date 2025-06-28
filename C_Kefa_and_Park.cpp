#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++)
const int N = 2*1e5 + 10;
vector<int> cc(N);
vector<int> graph[N];
bool vis[N]; 

void dfs(int vertex, int ans) {
    int c = 0;
    c+=cc[vertex];
    vis[vertex] = true;
    for(auto child : graph[vertex]) {
        if(vis[child]) continue;
        dfs(child, ans);
    }
}

void solve() {

    int n, m;
    cin>>n>>m;
    for(int i = 1; i<=n; i++) {
        cin>>cc[i];
    }
    for(int i = 1; i<=n-1; i++) {
        int v1, v2;
        cin>>v1>>v2;
        graph[v2].push_back(v1);
        graph[v1].push_back(v2);
    }
    int answer = 0
    dfs(1, answer);
}




int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}