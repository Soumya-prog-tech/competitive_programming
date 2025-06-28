#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define f(n) for(int i = 0; i<n; i++) 
const int N = 1e4 + 10;
vector<long long int> fact(N);

void solve() {

	int n;
	cin>>n;
    vector<string> names(n);
    vector<string> vowels = {"a", "e", "i", "o", "u"};
    for(int i = 0; i<n; i++) {
        cin>>names[i];
    }
    vector<string> checkers;
    long long int ans = 0;
    for(int mask = 1; mask<32; mask++) {
        
        for(int j = 0; j<5; j++) {
            if(mask & (1<<j)) {
            checkers.push_back(vowels[j]);
            }
        }
        if(checkers.size() % 2 != 0) {
            long long int count = 0; 
            for(auto name : names) {
                int flag = 1; 
                for(auto c : checkers) {
                    
                    if(name.find(c) == string::npos) flag = 0;
                }
            
                if(flag) count++;
            }
            ans += fact[count];
        }

        if(checkers.size()%2 == 0 ) {
            long long int count = 0; 
            for(auto name : names) {
                int flag = 1; 
                for(auto c : checkers) {
                    if(name.find(c) == string::npos) flag = 0;
                }
                if(flag) count++;
            }
            ans-=fact[count];
        }
        checkers.clear();
    }
	cout<<ans<<endl;
}




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
    
    fact[0] = fact[1] = fact[2] = 0;
    for(long long int i = 3; i<N; i++) {
        fact[i] = i*(i-1)*(i-2)/6;
    }
    
	while(t--) {
		solve();
	}
}