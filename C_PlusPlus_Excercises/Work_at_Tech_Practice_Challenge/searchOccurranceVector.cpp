/*
https://workat.tech/problem-solving/practice/search-range
Search Range
Given a sorted array and a number key, find the index of the first and last occurrence of the key in the array.

If the key is not present, return [-1, -1].

Expected Time Complexity: O(log n)

Examples
Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 3
Answer: [2, 4]

Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 5
Answer: [7, 7]

Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 6
Answer: [-1, -1]
*/

#include <iostream>
#include <algorithm>
#include <vector>

// my solution
std::vector<int> searchRange(std::vector<int>& arr, int key) {
	// add your logic here
	std::vector<int>::iterator it;
	std::vector<int>::reverse_iterator r_it;
	std::vector<int> v = {};
	it = std::find(arr.begin(), arr.end(), key);
	if (it != arr.end()) {
		// add index position of first occurrence
		v.push_back(it - arr.begin());
		
		// search for last occurrence by reverse begin and reverse end
		r_it = std::find(arr.rbegin(), arr.rend(), key);
		if (r_it != arr.rend()) { 
			// add index position of this current occurrence
			v.push_back(arr.rend() - r_it -1); 
		}
		else {
			v.push_back(it - arr.begin());
		}
		return v;
	}
	else {
		// no occurrence found
		std::vector<int> v = { -1, -1 };
		//v.push_back(-1);
		return v;
	}
	
}

int main() {
	std::vector<int> ip = { 1, 2, 3, 3, 3, 4, 3, 3 };
	std::vector<int> op = searchRange(ip, 3);
	for (auto el : op)
	{
		std::cout << "vector " << el << '\n';
	}
	return 0;
}
