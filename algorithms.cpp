#include<bits/stdc++.h>
using namespace std;

int main() {

   // cout<<[](int x){return x;}(2);
   vector<int> v = {2, 3, -5};
   cout<<all_of(v.begin(), v.end(), [](int x){ return x>0;});
   cout<<any_of(v.begin(), v.end(), [](int x){ return x>0;});
   cout<<none_of(v.begin(), v.end(), [](int x){ return x>0; });
}