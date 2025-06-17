#include<bits/stdc++.h>
using namespace std;

void solve() {

int w, h, a, b;
cin>>w>>h>>a>>b;
int x1, y1, x2, y2;
cin>>x1>>y1>>x2>>y2;
int xdrop,ydrop;

xdrop = max(x1,x2) - (min(x1,x2)+a);
ydrop = max(y1,y2) - (min(y1,y2)+b);


        if(x1==x2) {
        	if(ydrop%b == 0) cout<<"yes"<<endl;
        	else cout<<"no"<<endl;
        	return;
        }

        if(y1==y2) {
        	if(xdrop%a == 0) cout<<"yes"<<endl;
        	else cout<<"no"<<endl;
        	return;
        }

		if(xdrop%a==0 || ydrop%b == 0) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		
}




int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}