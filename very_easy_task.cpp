#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 
#define middle l+(r-l)/2;

ll predicate(ll x, ll y, ll t, ll n) {
	if(t<min(x, y)) return false;
	
	ll res = 1;
	t-=min(x, y);
	res += t/x + t/y ;
	cout<<res<<endl;
	return res>=(n);
}

void solve() {

	ll n, x, y;
	cin>>n>>x>>y;
	ll mn = min(x, y);
	ll l = 0; 
	ll r = max(x, y) * n;
	ll mid = l + (r-l)/2;
	while(r-l > 1) {
		if(predicate(x, y, mid, n)) r = mid;
		else l = mid;
		mid = l + (r-l)/2;
	}
	cout<<r<<endl;
}

int main() {
	int t = 1;

	while(t--) {
		solve();
	}
}