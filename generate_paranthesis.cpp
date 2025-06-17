/*Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:

Input: n = 1
Output: ["()"]
*/

#include<bits/stdc++.h>
using namespace std;
vector<string>valid;

void generateString(string &s, int open, int close) {
	if(open==0 && close==0) {
		valid.push_back(s);
		return;
	}
	if(open>0) {
		s.push_back('(');
		generateString(s, open-1, close);
		s.pop_back();
	}
	if(close>0) {
		if(open<close) {
		s.push_back(')');
		generateString(s, open, close-1);
		s.pop_back();
	}
	}
}

int main() {
	int n;
	cin>>n;
	string s = "";
	generateString(s, n, n);
	for(auto s : valid) {
		cout<<s<<endl;
	}

}