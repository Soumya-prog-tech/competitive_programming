#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
long long int arr[N][26];


int main() {

     int t; 
     cin>>t;

     while(t--) {



          int n, q;
          cin>>n>>q;
          for(int i = 1; i<=n; i++) {
          	for(int j = 0; j<26; j++) {
          		arr[i][j] = 0;
          	}
          }
          string s;
          cin>>s;
          for(int i = 0; i<n; i++) {
          	arr[i+1][s[i] - 'a']++;
          }
           
          for(int i = 0; i<26; i++) {
          	for(int j = 1; j<=n; j++) {
          		arr[j][i] += arr[j-1][i] ;
          	}
          } 

          while(q--) {

              int l, r;
              cin>>l>>r;
              int oddCt = 0;
              for(int i = 0; i<26; i++) {
              	      int
                      ct = arr[r][i] - arr[l-1][i];
                      if(ct % 2 != 0 ) oddCt ++;
              }

              if(oddCt > 1) cout<<"NO"<<endl;
              else cout<<"YES"<<endl;

          }

     }

    
}