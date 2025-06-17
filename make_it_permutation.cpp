#include<bits/stdc++.h>
using namespace std;

void solve() {

 int n;
 cin>>n;

 cout<<2*n-1<<"\n";

 for(int i = 1; i<n; i++) {

 	cout<<i<<" "<<1<<" "<<i<<"\n";
 	cout<<i<<" "<<i+1<<" "<<n<<"\n";

 }

 cout<<n<<" "<<1<<" "<<n<<"\n";

}

int main() {

int t;
cin>>t;

while(t--) {

	solve();
}

}