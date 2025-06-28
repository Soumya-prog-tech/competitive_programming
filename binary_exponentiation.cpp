#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binExpRecur(int a, int b) {
	// a<=10^18
	if(b==0) return 1;
	int res = binExpRecur(a, b/2);
	if(b&1) {
		return (a * ((res *1LL* res) % M)) % M;
	}else {
		return (res*1LL*res)%M;
	}
}

int binMultiply(int a, int b) {
	int ans = 0; 
	while(b>0) {
		if(b&1) {
			ans = (ans + a) % M;
		}
		a = (a + a) % M;
		b>>1;
	}
}

int binExpIter(int a, int b) {
	int ans = 1;
	while(b) {
		if(b&1) {ans = (binMultiply(ans, a));}
		a = (binMultiply(a, a));
		b>>=1;
	}
	return ans;
}


int main() {
	int a= 2, b=100;
	cout<<binExpIter(a,b);
}