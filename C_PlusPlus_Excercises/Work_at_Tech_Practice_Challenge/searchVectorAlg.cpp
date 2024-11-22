/* 
https://workat.tech/problem-solving/practice/contains-element
Contains Element?
Given a sorted array and a number key, return whether the key is present in the array or not.

Expected Time Complexity: O(log n)

Examples
Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 2
Answer: true

Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 6
Answer: false

My Solution:
------------

#include <algorithm>
bool containsElement(vector<int> &arr, int key) {
	// add your logic here
	vector<int>::iterator result;
	result = std::find(arr.begin(), arr.end(), key);
	if  ( result != arr.end()) {
		return true;
	} else {
		return false;
	}
}
*/

#include <iostream>
#include <algorithm>
#include <vector>

// my solution
bool containsElement(std::vector<int>& arr, int key) {
	// add your logic here
	std::vector<int>::iterator result;
	result = std::find(arr.begin(), arr.end(), key);
	if (result != arr.end()) {
		return true;
	}
	else {
		return false;
	}
}

int maxxin() {
	std::vector<int> v = { 1,5,2,15,3,10 };
	std::cout <<"search 15 from { 1,5,2,15,3,10 }, " << containsElement(v, 15);
	return 0;
}


