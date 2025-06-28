#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n; i++) {
		cin>>v[i];
	}
	long long int ans = 0;
	for(int i = 0; i<n-2; i++) {
		for(int j = i+1; j<n-1; j++) {
			auto it1 = lower_bound(v.begin()+j+1, v.end(), v[i] + v[j]);
			if(it1 == v.begin()+j+1) continue;
			auto it2 = upper_bound(v.begin() + j+1, v.end(), v[n-1] - v[i] - v[j]);
			if((it2 - v.begin()) > (it1 - v.begin())) continue;
			ans += 1LL * (it1-v.begin()) - (it2-v.begin());
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