#include<bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<int, string> m;
	m[1] = "abc"; // O(1)
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});
	auto it = m.find(4); // O(1)
	if(it != m.end()) m.erase(it);

	for(auto p : m) {
		cout<<p.first<<" "<<p.second<<endl;
	}
	m.clear();
		for(auto p : m) {
		cout<<p.first<<" "<<p.second<<endl;
	}

}

// We cannot use key as vectors and other complex datatypes