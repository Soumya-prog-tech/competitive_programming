#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n; i++) {
		cin>>v[i];
	}
	int ans = 0;
	
	if(n == 2 && abs(v[1] - v[0]) > 1) {
		cout<<-1<<endl;return;
		}



	for(int i = 0; i<n-1; i++) {
		if(abs(v[i+1] - v[i]) == 0) {
			cout<<0<<endl;return;
		}
	}

	for(int i = 2; i<n; i++) {
		int mx = 0;
		int mn = 0;
	

		for(int j = 0; j<i; j++) {
			mx = max(mx, v[j]);
			mn = min(mn, v[j]);
		}
		mx++;
		mn--;
		if(v[i] >= mn && v[i]<=mx) {
			int checker = -1;
			for(int j = 0; j<i-1; j++) {
				if(v[j]+ 1>=v[i]) {
					checker = j;
				}
				
			}
			if(checker == -1) {
				cout<<1<<endl;return;
			}
			else {
			cout<<i-checker-1<<endl;return;}

		}

		
	}

}




int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
