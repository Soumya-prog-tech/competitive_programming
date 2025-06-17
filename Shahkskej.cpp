#include<bits/stdc++.h>
using namespace std;

void solve() {

int k,a,b,x,y;
cin>>k>>a>>b>>x>>y;
vector<pair<int, int>> v(2);
v[0] = {x, a};
v[1] = {y, b};
sort(v.begin(), v.end());


long long int ans=0;

if(k>=v[0].second) {

 int n = ((k-v[0].second)/v[0].first) + 1;
 ans+=n;
 k-=(n*v[0].first);
	
}


if(k>=v[1].second) {

 int n = ((k-v[1].second)/v[1].first) + 1;
 ans+=n;
 k-=(n*v[1].first);
	
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