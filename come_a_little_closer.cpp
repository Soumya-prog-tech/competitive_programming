#include<bits/stdc++.h>
using namespace std;

// n = 3
// 1 1 
// 1 2 
// 2 1

long long int findArea(int n, vector<pair<int, int>> &v) {
	int xl = 1e9;
	int xu = 1;
	int yl = 1e9;
	int yu = 1;
	for(int i = 0; i<=n; i++) {
		if(v[i].first == (-1) || v[i].second == (-1)) {
			continue;
		}
        xl = min(xl, v[i].first);
        xu = max(xu, v[i].first);
        yl = min(yl, v[i].second);
        yu = max(yu, v[i].second);
        // cout<<xl<<xu<<yl<<yu<<endl;
	}
	// cout<<xl<<" "<<xu<<" "<<yl<<" "<<yu<<endl;
	long long int l1 = xu - xl + 1;
	long long int l2 = yu - yl + 1;
	// cout<<l1<<" "<<l2<<endl;
	long long int area = l1*l2;
	if(area == n) {
		area = min((l1+1)*l2, (l2+1)*l1);
	}
	// cout<<area<<endl;
	return area;
}

void solve() {
	int n;
	cin>>n;

	vector<pair<int, int>> v;
	for(int i = 1; i<=n; i++) {
           int a, b;
           cin>>a>>b;
           v.push_back({a, b});
	}
	if(n==1) {
		cout<<1<<endl;
		return;
	}
	// for(auto x : v) {
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }
    int xl = 1e9;
	int xu = 1;
	int yl = 1e9;
	int yu = 1;
	for(int i = 0; i<n; i++) {
		
        xl = min(xl, v[i].first);
        xu = max(xu, v[i].first);
        yl = min(yl, v[i].second);
        yu = max(yu, v[i].second);
	}
	// cout<<xl<<" "<<xu<<" "<<yl<<" "<<yu<<endl;
	long long int ans = 1e18;
	for(int i = 0; i<n; i++) {
		if(v[i].first == xl) {
			v[i].first = -1;
			ans = min(ans, findArea(n-1, v));
			// cout<<ans<<endl;
			v[i].first = xl;
			break;
		}
	}
	// 	 for(auto x : v) {
	// cout<<x.first<<" "<<x.second<<endl;
	//  }
	for(int i = 0; i<n; i++) {
		if(v[i].first == xu) {
			v[i].first = -1;
			ans = min(ans, findArea(n-1, v));
			// cout<<ans<<endl;
			v[i].first = xu;
			break;
		}
	}
	// 	 for(auto x : v) {
	// cout<<x.first<<" "<<x.second<<endl;
	//  }
	for(int i = 0; i<n; i++) {
		if(v[i].second == yl) {
			v[i].second = -1;
			ans = min(ans, findArea(n-1, v));
			// cout<<ans<<endl;
			v[i].second = yl;
			break;
		}
	}
	// 	 for(auto x : v) {
	// cout<<x.first<<" "<<x.second<<endl;
	//  }
	for(int i = 0; i<n; i++) {
		if(v[i].second == yu) {
			v[i].second = -1;
			ans = min(ans, findArea(n-1, v));
			// cout<<ans<<endl;
			v[i].second = yu;
			break;
		}
	}
	// 	 for(auto x : v) {
	// cout<<x.first<<" "<<x.second<<endl;
	//  }
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {

		solve();
	}


}