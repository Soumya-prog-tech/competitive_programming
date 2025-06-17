/* Given array a of N integers. Given Q queries 
and in eac query given L and R print sum of 
array elements from index L to R( L, R included )

Constraints
1<=a[i]<=10^9
1<=N<=10^5
1<=Q<=10^5
1<=L, R<=N
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int arr[N];
long long int pf[N];

int main() { 

      int n;
      cin>>n;
      for(int i = 1; i<=n; i++) {
      	cin>>arr[i];
      	pf[i] = pf[i-1] + arr[i];
      }

      int q	;
      cin>>q;
      while(q--) {
      	int l, r;
      	cin>>l>>r;
      	cout<<pf[r] - pf[l-1]<<endl;
      }
}

// Time Complexity : O(N) + O(T)