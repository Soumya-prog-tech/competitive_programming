#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, s;
	cin>>n>>s;
	int ans = 0;
	set<int> v;
	for(int i = 0; i<n; i++) {
		int temp;
		cin>>temp;
		v.insert(temp);
	}
	v.insert(s);
	auto it = v.find(s);
	int min_side = 0;
	int max_side = 0;
    
    min_side += (*it) - (*(v.begin()));
    
    max_side += (*(--v.end())) - (*it);
	
	if(max_side == 0) {
		ans = min_side;
	}
	else if(min_side == 0) {
		ans = max_side;
	}
	else if(max_side >=min_side) {
		ans = 2*min_side + max_side;
	}
	
	else {
		ans = 2*max_side + min_side;
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