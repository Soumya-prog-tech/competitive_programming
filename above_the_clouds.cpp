#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int counts; 
	for(int i =0; i<n-1; i++) {
		counts = count(s.begin() + i, s.end()-1, s[i]);
		if(counts>1) {
			cout<<"yes"<<endl;
			return;
		}
	}
	for(int i = n-1; i>0; i--) {
		counts = count(s.begin()+1, s.end(), s[i]);
		if(counts>1) {
			cout<<"yes"<<endl;
			return;
		}
		
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