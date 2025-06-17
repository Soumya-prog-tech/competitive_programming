#include<bits/stdc++.h>
using namespace std;

int beauty_calculator(long long int n) {

        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;

}

bool comp(int a, int b) {
    return a > b;
}

void solve() {
	
int n;
cin>>n;
long long int k;
cin>>k;
vector<long long int>v(n);
int beauty = 0;
for(int i = 0; i<n; i++) {
	cin>>v[i];
	beauty+=beauty_calculator(v[i]);
}

sort(v.begin(), v.end(), comp);

for(int i = 0; i<n && k!=0; i++) {

    if(v[i] % 2 == 0) {

        beauty+=1;
        v[i] +=1;
        k-=1;

    }

}

long long int increaser = 2;
while(k>=increaser) {

     for(int i=0; i<n && k>=increaser; i++) {

          if(beauty_calculator(v[i] + increaser) > beauty_calculator(v[i])) {
             
             beauty +=1;
             v[i] += increaser;
             k-=increaser;

          }

     }

     increaser*=2;

}

cout<<beauty<<"\n";

}

int main() {

int t;
cin>>t;

while(t--) {

	solve();
}

}