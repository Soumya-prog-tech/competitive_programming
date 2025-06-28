#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n,s;
	cin>>n>>s;
	vector<pair<int, int>> d(n);
	vector<pair<int, int>> c(n);
	for(int i = 0; i<n; i++) {
		int dx, dy;
		cin>>dx>>dy;
		d[i] = {dx, dy};
		int x, y;
		cin>>x>>y;
		c[i] = {x, y};
	}	
	int ans = 0;
	for(int i = 0; i<n; i++) {
		if(c[i].first == c[i].second && d[i].first == d[i].second) {
			ans ++;
		}
		if(c[i].first + c[i].second == s && d[i].first != d[i].second) {
			ans ++;
		}
	}
	cout<<ans<<endl;
}




int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}