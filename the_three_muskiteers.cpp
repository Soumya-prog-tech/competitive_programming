#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 

void solve() {

	int n;
	cin>>n;
	vector<string> a;
	vector<string> e;
	vector<string> i;
	vector<string> o;
	vector<string> u;
	f(n) {
		string s;
		cin>>s;
		if(s.find('a') != string::npos) a.push_back(s);
		if(s.find('e') != string::npos) e.push_back(s);
		if(s.find('i') != string::npos) i.push_back(s);
	    if(s.find('o') != string::npos) o.push_back(s);
	    if(s.find('u') != string::npos) u.push_back(s);
	}
	for(auto e : a) {
		cout<<e<<endl;
	}

	
}




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}