#include<bits/stdc++.h>
using namespace std;

long long int findsum(vector<long long int>&v) {
	long long int sum = 0;
	for(long long int i = 0; i<v.size(); i++) {
		sum+=v[i];
	}
	return sum;
}

void solve() {

	long long int n, m;
	cin>>n>>m;
	vector<long long int> v(n, 1);
	long long int sum = findsum(v);
	long long int index = 1;
	long long int increaser = n-1;
	long long int high = n*(n+1)/2;
	if(m<n || m>high) {
		cout<<-1<<endl;
		return;
	}
	while(sum + increaser < m) {
		v[index] += index;
		sum+=increaser;
		index++;
		increaser--;
	}
	long long int diff = m - sum;
	
	for(long long int i = index; i<n; i++) {
		v[i] += (index-1);
	}
	for(long long int i = index; i<index+diff; i++) {
		v[i]++;
	}
	// for(auto e : v) {
	// 	cout<<e<<endl;
	// }

	long long int k = 1;
	long long int root = *max_element(v.begin(), v.end());
	cout<<root<<endl;
	for(long long int i = root; i>0; i--) {
		long long int counts = count(v.begin(), v.end(), i);
		counts--;
		if(i!=root) {
			cout<<root<<" "<<i<<endl;
			
		}
		
		while(counts--) {
			cout<<i<<" "<<root+k<<endl;
			k++;
		}
	}

}

 

int main() {
	long long int t;
	cin>>t;
	while(t--) {
		solve();
	}
}