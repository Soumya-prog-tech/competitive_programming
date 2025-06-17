#include<bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i = 0; i<n; i++) {
      	cin>>v[i];
      }
      sort(v.begin(), v.end());

      auto ptr = lower_bound(v.begin(), v.end(), 5);
      auto ptr2 = upper_bound(v.begin(), v.end(), 5);

      cout<<(*ptr)<<" "<<(*ptr2)<<endl;



}