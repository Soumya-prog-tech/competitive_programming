#include<bits/stdc++.h>
using namespace std;

void solve() {

vector<pair<int, int>> v(3);
for(int i = 0; i<3; i++) {
	int a, b;
	cin>>a>>b;
	v[i] = {a,b};
}
if(v[1].first + v[2].first == v[0].first && v[1].second == v[2].second && v[0].second + v[1].second == v[0].first) {
	cout<<"yes"<<endl;
	return;
}
if(v[1].second + v[2].second == v[0].second && v[1].first == v[2].first && v[0].first + v[1].first == v[0].second) {
	cout<<"yes"<<endl;
	return;
}
if(v[0].first == v[1].first && v[1].first == v[2].first && v[0].second + v[1].second + v[2].second == v[0].first) {
	cout<<"yes"<<endl;
	return;
}
if(v[0].second == v[1].second && v[1].second == v[2].second && v[0].first + v[1].first + v[2].first == v[0].second) {
	cout<<"yes"<<endl;
	return;
}
cout<<"no"<<endl;
}




int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}