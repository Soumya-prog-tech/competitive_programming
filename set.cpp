#include<bits/stdc++.h>
using namespace std;

int main() {
	set<string> s;
	s.insert("abc");
	s.insert("kdfj"); // stores unique values , O(log(n))
	s.insert("rtij");
    s.insert("abc");
 
	auto it = s.find("kdfj"); // O(log(n))
	if(it != s.end()) s.erase(it);

	for(auto p : s) {
		cout<<p<<endl;
	}
	s.clear();
		for(auto p : s) {
		cout<<p<<endl;
	}

}