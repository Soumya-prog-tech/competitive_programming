#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	// bool is_prime = true;
	// for(int i= 1; i*i<=n; i++) {
	// 	if(n%i == 0) {
	// 		is_prime = false;
	// 		break;
	// 	}
	// }
	// if(is_prime) cout<<"PRIME";
	// else cout<<"Not PRIME";

	vector<int> prime_factors;
	for(int i = 2; i<=n; ++i) {
		while(n%i==0) {
			prime_factors.push_back(i);
			n/=i;
		}
	}
	if(n>1) {
		prime_factor.push_back(n);
	}

	for(int prime : prime_factors) {
		cout<<prime<<" ";
	}
}