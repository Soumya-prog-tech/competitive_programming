#include<bits/stdc++.h>
using namespace std;
#define ll double
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 



bool ip(double x, int k, vector<int> &v) {
	if(x==0) return true;
	double ans = 0;
	f(v.size()) {
		ans+=int(v[i]/x);
	

	}
	// cout<<ans<<endl;
	return ans>=(int)k;
}

void solve() {	

int n, k;
cin>>n>>k;
vi v(n);
f(n) {
	cin>>v[i];
}

double l = 0;
double r = 1e8;

double mid = l + (r-l)/2;
for(int i = 0; i<100; i++) {
	if(ip(mid, k, v)) l = mid;
	else r = mid;
	mid = l + (r-l)/2;
	// cout<<mid<<endl;
}
cout<<setprecision(16)<<l<<endl;
}




int main() {
	int t = 1;
	while(t--) {
		solve();
	}
}