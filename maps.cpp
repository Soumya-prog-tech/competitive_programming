#include<bits/stdc++.h>
using namespace std;

int main() {
	map<int, string> m;
	m[1] = "abc"; // O(log(n))
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});
	auto it = m.find(3); // O(log(n))
	if(it != m.end()) m.erase(it);

	for(auto p : m) {
		cout<<p.first<<" "<<p.second<<endl;
	}
	m.clear();
		for(auto p : m) {
		cout<<p.first<<" "<<p.second<<endl;
	}

}