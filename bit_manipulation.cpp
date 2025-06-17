#include<bits/stdc++.h>
using namespace std;

void printBinary(int num) {

	for(int i = 10; i>=0; --i) {
		cout<<((num>>i) & 1);
	}
	cout<<endl;
}

int  main() {
	// All even numbers have LSB as 0
	// All odd numbers have LSB as 1
	// int n;
	// cin>>n;
	// if((n & 1)) cout<<"Odd\n";
	// else cout<<"Even\n";

	// int n = 5;
	// cout<<(n>>1) <<endl;
	// cout<<(n<<1) <<endl;

	//converting upper to lower 
	// char A = 'A';
	// char a = A | (1<<5);
	// cout<<a<<endl;
	// //converting lower to upper 
	// char b = 'b';
	// char B = b & (~(1<<5));
	// cout<<B<<endl;
	// cout<< char(1<<5); // space

	//converting upper to lower
	// char B = 'B';
	// char b = B | ' ';
    // cout<<b<<endl;
    // //converting lower to upper
	// char d = 'd';
	// char D = (d&'_');
	// cout<<D<<endl;

	// clear LSB till ith position 
	int a = 59 ;
	printBinary(59);
	int i = 4;
	int b = (a&(~((1<<(i+1))-1)));
	printBinary(b);

	// clear MSB till ith position
	i = 3;
	int c = (a&((1<<(i+1)) - 1));

	// check if power of 2  
	int n = 15;

	if(n & (n-1)) {
		cout<<"not power of 2";
	}
	else {
		cout<<"power of 2";
	}
  
}