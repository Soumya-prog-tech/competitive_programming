#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin>>n;
	int ans=0;
	vector<int>v(n);
	for(int i = 0; i<n; i++) {
		cin>>v[i];
	}
	set<int> curr, seen;
	for(int i = 0 ; i<n; i++) {
		curr.insert(v[i]);
		seen.insert(v[i]);
		if(curr.size() == seen.size()) {
			ans++;
			seen.clear();
		}
	}

	cout<<ans<<"\n";
}


int main() {
	  ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}