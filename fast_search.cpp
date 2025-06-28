#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n; i++) {
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	int q;
	cin>>q;
	while(q--) {
		int l, r;
		
		cin>>l>>r;
		auto it1 = lower_bound(v.begin(), v.end(), l);
		auto it2 = upper_bound(v.begin(), v.end(), r);
		cout<<(it2-v.begin()) - (it1 - v.begin())<<" ";
	}

}




int main() {
	int t = 1;

	while(t--) {
		solve();
	}
}