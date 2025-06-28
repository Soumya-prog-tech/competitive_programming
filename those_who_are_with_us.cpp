#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin>>n>>m;
	int ans = INT_MIN;
	vector<vector<int>> v(n, vector<int>(m));
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin>>v[i][j];
		}
	}
	int maximum = 1;
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			maximum = max(maximum, v[i][j]);
		}
	}



    vector<int> rows(n);
    vector<int> columns(m);

    for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(v[i][j] == maximum) {
				rows[i]++;
				columns[j]++;
			}
		}
	}

  

	auto it = max_element(rows.begin(), rows.end());
	int r = it - rows.begin();
	auto it2 = max_element(columns.begin(), columns.end());
	int c = it2 - columns.begin();

	// cout<<r<<" "<<c<<endl;
	for(int i = 0; i<n ; i++) {
        
		v[i][c] -=1;

	}
	for(int j = 0; j<m; j++) { 
		v[r][j] -=1;
	}
	for(int i = 0; i<n; i++) {
		v[i][c] -=1;
	}



		for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			ans = max(ans, v[i][j]);
		}
		
	}

	cout<<ans<<endl;

}

using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}