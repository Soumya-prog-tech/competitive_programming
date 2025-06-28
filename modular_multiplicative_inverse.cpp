#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

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
	cout<<binexp(2, M-2, M);
}