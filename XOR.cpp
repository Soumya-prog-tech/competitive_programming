#include<bits/stdc++.h>
using namespace std;

int main() {

	int a = 4, b= 6;

	// 1 0 -> 1 
	// 0 1 -> 1
	// 0 0 -> 0
	// 1 1 -> 0
    // x^x -> x
    // x^0 -> x
    // x^^y^z = x^z^y = y^x^z

    // swapping a and b

    a = a^b;
    b = b^a;
    a = a^b;
    cout<<a<<" "<<b<<endl;

}