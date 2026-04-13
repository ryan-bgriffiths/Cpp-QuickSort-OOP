// Name: Ryan Griffiths
// Assignment: A7
// Course: CISP 400
// File name: quickSortHelper.cpp
// Purpose: Function definitions. 
//			File contains implementation of function prototypes in quickSortHelper.h

#include "quickSortHelper.h" 
#include <vector> // included for vector
#include <cstdlib> // included for rand
#include <iostream> // include for I/O
#include <iomanip> // included for stream manipulators
using namespace std;

// Function to generate vector of random size(0-20) with random int elements(0-100).
vector<int> generateVector() {

	// generate a random size from 0 to 20
	size_t size = rand() % 21;

	// initialize the vector
	vector<int> multiple_random_numbers(size);

	// input random int elements from 0 to 100 into the vector
	for (size_t i = 0; i < size; ++i) {
		multiple_random_numbers[i] = (rand() % 101);
	}

	return multiple_random_numbers;
}; // End function generateVector

// Function to quick sort a vector of int values. 
void quickSortHelper(vector<int>& numbers, size_t start, size_t end) {
	// check for vector of 0 elements
	if ((end - start) <= 0) {

		// partition the vector
		size_t anchor_index = partition(numbers, start, end);

		// sort right and left sub vectors recursivley
		if (anchor_index > start) {
			quickSortHelper(numbers, start, anchor_index - 1); // left sub vector 
		}
		if (anchor_index < end) {
			quickSortHelper(numbers, anchor_index + 1, end); // right sub vector
		}
	}
} // End quickSortHelper Function

// Funciton to partition the vector
size_t partition(vector<int>& numbers, size_t start, size_t end) {
	
	int anchor_value = numbers[start]; // anchor is the first element
	size_t left = start + 1;
	size_t right = end;

	while (true) {
		// move right to find an element greater or equal to the anchor
		while (left <= end && numbers[left] <= anchor_value) {
			left++;
		}

		// move left to find an element less than or equal to the anchor
		while (right >= start && numbers[right] > anchor_value) {
			right--;
		}

		// less than the anchor place to the left, greater place right of anchor
		if (left < right) {
			swap(numbers[left], numbers[right]);
		}
		else {
			break;
		}
	}

	swap(numbers[start], numbers[right]);
	// Anchor is in it's final location.

	return right; // Return the index of the anchor

}// End partition

// Function to output the unsorted vector
void outputUnsorted(vector<int>& numbers) {
	
	// Empty vector
	if (numbers.empty()) {
		cout << "  The vector is empty" << "\n\n";
	}
	// vector of size 1
	else if (numbers.size() == 1) {
		cout << "  Initial vector value is:\n";
		cout << "  " << setw(2) << setfill(' ') << numbers.at(0) << "\n";
	}
	// vector of size > 1
	else if (numbers.size() > 1) {
		cout << "  Initial vector values are:\n";
		for (int num : numbers) {
			cout << "  " << setw(2) << setfill(' ') <<  num;
		}cout << "\n";
	}

}// End outputUnsorted

// Function to output the sorted vector
void outputSorted(vector<int>& numbers) {

	// output for an empty vector
	if (numbers.empty()) {
		cout << "  The sorted vector is empty.\n\n";
	}

	// output the single element 
	else if (numbers.size() == 1) {
		cout << "  Vector is sorted:\n";
		cout << "  " << setw(2) << setfill(' ') << numbers.at(0) << "\n\n";
	}

	// output the content of the sorted vector
	else if (!numbers.empty() && numbers.size() > 1) {
		cout << "  The sorted vector values are:\n";
		for (int num : numbers) {
			cout << "  " << setw(2) << setfill(' ') << num;
		}cout << "\n\n";
	}

}// End outputSorted