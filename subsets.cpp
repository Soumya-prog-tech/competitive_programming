/*
Given an integer array nums of unique elements, return all possible

(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:

Input: nums = [0]
Output: [[],[0]]

 

Constraints:

    1 <= nums.length <= 10
    -10 <= nums[i] <= 10
    All the numbers of nums are unique.
*/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subs; 

void generate(vector<int> &sub, int i, vector<int> &nums) {
	// base condition 
	if(i==nums.size()) {
		subs.push_back(sub);
		return;
	}
	// ith element is not included
	generate(sub, i+1, nums);
	// ith element is included
	sub.push_back(nums[i]);
	generate(sub, i+1, nums);
	sub.pop_back();
}

int main() {
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i = 0; i<n; i++) {
		cin>>nums[i];
	}
	vector<int> empty;
	generate(empty, 0, nums);
	for(auto subset : subs) {
		for(int i = 0; i<subset.size(); i++) {
			cout<<subset[i]<<" ";
		}
		cout<<endl;
	}

}