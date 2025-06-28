#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 
const int N = 1e5+10;
vector<int>graph[N];
bool vis[N];

void dfs(int vertex) {
    vis[vertex] = true;
    for(auto child : graph[vertex]) {
        if(vis[child]) continue;
        dfs(child);
    }
}

void solve() {

    int n, m;
    cin>>n>>m;
    for(int i = 0; i<m; i++){
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int count = 0;
    vector<int>toC;
    for(int i = 1; i<=n; i++) {
        if(vis[i]) continue;
        toC.push_back(i);
        dfs(i);
        count++;
    }
    cout<<count-1<<endl;
    for(int i = 0; i<toC.size() - 1; i++) {
        cout<<toC[i]<<" "<<toC[i+1]<<endl;
    }
}




int main() {
	int t = 1;
	// cin>>t;
	while(t--) {
		solve();
	}
}