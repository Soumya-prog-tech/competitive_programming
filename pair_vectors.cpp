#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) { // pass vector by reference always
	cout<< "size : "<<v.size()<<endl;
	for(int i = 0 ; i<v.size(); i++) {
         cout<<v[i]<<endl;
	}
}

int main() {
	// pair<int, string> p;
	// p = {2, "abc"} ;
	// cout<<p.first<<" "<< p.second <<endl;

    // pair<int, int> p_array[3];
    // p_array[0] = {1, 2};
    // p_array[1] = {2, 3}; 
    // p_array[2] = {3, 4};
    // for(int i = 0; i<3; ++i) {
    // 	cout<< p_array[i].first << " "<<p_array[i].second<<endl;
    // }

    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) {
    	int x;
    	cin>>x;
    	v.push_back(x);
    }

    printVec(v);
    v.pop_back() // removes the last element
    vector<int> v2 = v; // we can  make a copy of a vector which cannot be made with arrays Time Complexity = O(n)


}