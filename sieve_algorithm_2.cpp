#include<bits/stdc++.h>

using namespace std; 

const int N = 1e5 + 10;

vector<int> hp(N);
vector<int> canRemove(N);
vector<int> hsh(N);

vector<int> DistinctPf(int x) {

	vector<int> pf;

	while(x > 1) {

		int prime_factor = hp[x];

		while(x % prime_factor == 0) {

			x /= prime_factor;

		}

		pf.push_back(prime_factor);

	}

	return pf;

}

int main() {

	// Finding highest prime factor for each number from 2 to N
	for(int i = 2; i<N; i++) {
		if(hp[i] == 0) {
			for(int j = i; j<N; j+=i) {
				hp[j] = i;
			}
		}
	}



	int n, q;
	cin>>n>>q;

	vector<int> a(n);

	for(int i = 0; i<n; i++) {
		int x;
		cin>>x;
		hsh[x] = 1
	}

	for(int i = 2; i<N; i++) {
		if(hsh[i]) {

			for(long long int j = i; j<N; j*=i) {

				canRemove[j] = 1;

			}

		}
	}

	while(q--) {

		int x;
		cin>>x;
		
		if(x == 0 || x == 1) {

			cout<<"NO\n";
			continue;
			

		}

		bool isPossible = false;

		vector<int> pf = DistinctPf(x);

		for(int i = 0; i<pf.size(); i++) {

			for(int j = i; j<pf.size(); j++) {

				int product = pf[i]*pf[j];
				if(i == j && x % product != 0) continue;

				int toRemove = x / product;



				if(canRemove[toRemove] == 1 || toRemove == 1) {

					isPossible = true;
				    break;

				}

			}

			if(isPossible) {
				break;
			}

		}

		if(isPossible) cout<<"YES\n";
		else cout<<"NO\n";

	}

}