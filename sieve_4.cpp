#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1e5 + 10;
vector<int> divisors(N);
vector<int> hsh(N);

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i = 0; i<n; i++) {
		cin>>v[i];
		hsh[v[i]] ++;
	}
    for(int i = 1; i<N; i++) {
    	for(int j = i; j<N; j+=i) {
    		divisors[i] +=hsh[j];
    	}
    }

// cout<<divisors[4]<<endl;

	int q;
	cin>>q;
	
	while(q--) {
		int a, b;
		cin>>a>>b;
		int ans = divisors[a] + divisors[b];
		long long int lcm = (a * 1LL * b) / __gcd(a,b);
		if(lcm < N) {
			ans -= divisors[lcm];
		}
		
		cout<<ans<<endl;
	}
}