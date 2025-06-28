#include<bits/stdc++.h>
using namespace std;


void solve() {
	long long int n; 
	cin>>n;
	vector<int>a(n);
	for(int i = 0; i<n; i++) {
		cin>>a[i];
	}
	int isAscending;
	int diff;
	if(a[1] >= a[0]) {
		isAscending = 1;
		diff = a[1] - a[0];
	}
	else { 
		isAscending = 0;
		diff = a[0] - a[1];
	}

	for(int i = 2; i<n; i++) {
		if(isAscending) {
			if(a[i] -a[i-1] != diff) {
				cout<<"no"<<endl;
				return;
			}
		}
		else {
			if(a[i-1] - a[i] !=diff) {
				cout<<"no"<<endl;
				return;
			}
		}
	}
	
	for(int i = 0; i<n; i++) {
		if(isAscending) {
			a[i] -=(diff*(i+1));
		}
		else {
			a[i] -=(diff*(n-i));
		}
	}
	if(a[0]>=0 && a[0]%(n+1) == 0) {
		cout<<"yes"<<endl;
	}
	else {
		cout<<"no"<<endl;
	}
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		solve() ;
	}
}