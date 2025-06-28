#include<bits/stdc++.h>
using namespace std;

void solve() {
	// int n,m;
	// cin>>n>>m;
	// vector<int> v(m);
	// for(int i = 0; i<m; i++) {
	// 	cin>>v[i];
	// }
	// vector<vector<int>> ans(n);
	// sort(v.begin(), v.end());

	// // for(auto elements : v) {
	// // 	cout<<elements<<" ";
	// // }

    // vector<int>max_n_2_numbers;
    // vector<int>min_n_2_numbers;
    // int k = n/2 + (n&1);
    // int s = n - k;
    // for(int i = 0; i<k; i++) {
    // 	min_n_2_numbers.push_back(v[i]);
    // }
    // for(int i = n-s; i<m; i++) {
    // 	max_n_2_numbers.push_back(v[i]);
    // }
    // // for(auto elements : max_n_2_numbers) {
    // // 	cout<<elements<<endl;
    // // }
    // // for(auto elements : min_n_2_numbers) {
    // // 	cout<<elements<<endl;
    // // }

    // for(int i = 0; i<k; i++) {
    
    // 	for(int j = 0; j<3; j++) {
    //         if(!min_n_2_numbers.empty()) {
    // 		ans[i].push_back(min_n_2_numbers[i]);}
    // 		if(!max_n_2_numbers.empty()) {
    // 		ans[i].push_back(max_n_2_numbers[i]);}
    // 	}
    // }
    // int f =0;
    // for(int i = s; i<n; i++) {

    	
    // 	    for(int j = 0; j<3; j++) {
    //         if(!max_n_2_numbers.empty()) {
    // 		ans[i].push_back(max_n_2_numbers[f]);
    // 	}
    // 		if(!min_n_2_numbers.empty()) {
    // 		ans[i].push_back(min_n_2_numbers[f]);}
    // 	}
    // 	f++;
    // }


    //  for(auto vectors : ans) {
    // 	for(auto elements : vectors) {
    // 		cout<<elements<<" ";
    // 	}
    // 	cout<<endl;
    // }

    int n, m;
    cin>>n>>m;
    vector<int> v(m);
    vector<vector<int>> ans(n, vector<int>(6));
    for(int i = 0; i<m; i++) {
    	cin>>v[i];
    }
    sort(v.begin(), v.end());
    // for(auto e : v) {
    //     cout<<e<<" ";
    // }
    // cout<<"\n";
    int k=0;
    for(int i = 0; i<n; i+=2) {
        
        for(int j = 0; j<6; j++) {
            if(j%2==0) {
                ans[i][j] = v[k];
            }
            else {
                ans[i][j] = v[m-1-k];
            }
            if((i+1)<n) {
                if(j%2==0) {
                    ans[i+1][j] = v[m-1-k];
                }
                else {
                    ans[i+1][j] = v[k];
                }
            }
        }
        k++;
    }

    for(auto groups : ans) {
        for(auto elements : groups) {
            cout<<elements<<" ";
        }
        cout<<"\n";
    }

}

int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}