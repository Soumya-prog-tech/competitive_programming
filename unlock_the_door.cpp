#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 1e9 + 7;
vector<int> fact(N);

int binexp(int a, int b, int m) {
	int result = 1;
	while(b>0) {
		if(b & 1) {
			result = (result * 1LL * a) % m;
		}
		a = (a * 1LL * a) % m;
		b>>=1;
	}
	return result;
}

int main() {
	fact[0] = fact[1] = 1;
	for(int i = 2; i<N; i++) {
		fact[i] = (fact[i-1] * 1LL * i) % M;
	}
	int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin>>n>>k;
		int numerator = fact[k];
		int denominator = fact[k-n];
		// cout<<numerator<<endl;
		// cout<<denominator<<endl;
		int ans = (numerator * 1LL * binexp(denominator, M-2, M))%M;
		cout<<ans<<endl;
	}
}