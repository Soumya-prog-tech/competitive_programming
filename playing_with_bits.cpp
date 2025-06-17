/* 
0th bit = Least Significant Bit
Nth bit = Most Significant Bit
Set bit -> 1 
unset bit -> 0
*/

#include<bits/stdc++.h>
using namespace std;

void printBinary(int n) {
     if(n==0) return;
     printBinary(n/2);
     cout<<n%2;
}
int main() {
	// to check if ith bit is set 
	int a = 100;
	printBinary(a);
	int i;
	cin>>i;
	if((a & (1<<i))!=0) { 
		cout<<"\nset";
	}
	else {cout<<"\nunset";}
	// bit set
	printBinary(a | (1<<i));
	// bit unset
	printBinary(a & (~(1<<i))); // ~ this reverses the bits 1100 becomes 0011
	// toggle
	printBinary(a^(1<<i)) ;// XOR operation is used

	// count set bits
	int ct = 0; 
	for(int i = 31; i>=0; --i) {
		if((a & (1<<i))!=0) ct++;
	}

	cout<<__builtin_popcount(10000); // for counting set bits;
	cout<<__builtin_popcountll(1LL<35); //for counting set bits in long long integers;
}