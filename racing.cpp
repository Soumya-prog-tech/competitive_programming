#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	vector<pair<int, int>> v(n);
	vector<int>d(n);
	for(int i = 0; i<n; i++) {
		cin>>d[i];
	}
	for(int i = 0; i<n; i++) {
		int a, b;
		cin>>a>>b;
		v[i] = {a, b};
	}
	int left = 0;
	stack<int> s;
	for(int i = 0; i<n; i++) {
		if(d[i]==(-1)) {
			s.push(i);
		}
		else {
			left +=d[i];
		}
		while(left<v[i].first) {
			if(s.empty()) {
				cout<<-1<<"\n";
				return;
			}
			d[s.top()] = 1;
			left++;
			s.pop();
		}
		while(left + s.size() > v[i].second) {
			if(s.empty()) {
				cout<<-1<<"\n";
				return;
			}
			d[s.top()] = 0;
			s.pop();
		}
	}
	for(int i = 0; i<n; i++) {
		cout<<max(0, d[i])<<" ";

	}
	cout<<"\n";

	}



int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}