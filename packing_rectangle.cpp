#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int isPossible(long long int x, lli a, lli b, lli n) {
   if((x/a) * (x/b) < n) return 0;
   else return 1;
}

int main() {
	lli w, h, n;
	cin>>w>>h>>n;
	long long int l = 0;
	long long int r = 1;

	
	while(isPossible(r, w, h, n)==0) {
		r*=2;
	}
	cout<<r<<endl;
	long long int mid = (l+r)/2;
	while(r-l>1) {
		if(isPossible(mid, w, h, n)) {
			r = mid;
		}
		else l = mid;
		mid = (l+r)/2;
	}
	
	cout<<r<<endl;
}