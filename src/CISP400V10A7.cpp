// Name: Ryan Griffiths
// Assignment: A7
// Course: CISP 400
// File name: CISP400V10A7.cpp
// Purpose: Driver file to generate and sort 10 vectors of size(0-20) 
//			with element values(0-100) using quickSortHelper function.


#include "quickSortHelper.h" // quickSortHelper definition
#include <iostream> // included for I/O
#include <ctime> // included for time
#include <cstdlib> // include for srand
using namespace std;

int main() {
	// seed the random number generator.
	srand(static_cast<unsigned int>(time(0)));

	// Generate 10 vectors, output original values, sort, then output sorted values.

	// 1st Vector.
	vector<int> vector_1 = generateVector(); 
	cout << "The 1st set of data(" << vector_1.size() << "):\n";
	outputUnsorted(vector_1);
	if (!vector_1.empty()) {
		quickSortHelper(vector_1, 0, vector_1.size() - 1); 
	}
	outputSorted(vector_1);

	// 2nd Vector.
	vector<int> vector_2 = generateVector();
	cout << "The 2nd set of data(" << vector_2.size() << "):\n";
	outputUnsorted(vector_2);
	if (!vector_2.empty()) {
		quickSortHelper(vector_2, 0, vector_2.size() - 1);
	}
	outputSorted(vector_2);
	
	// 3rd Vector.
	vector<int> vector_3 = generateVector();
	cout << "The 3rd set of data(" << vector_3.size() << "):\n";
	outputUnsorted(vector_3);
	if (!vector_3.empty()) {
		quickSortHelper(vector_3, 0, vector_3.size() - 1);
	}
	outputSorted(vector_3);

	// 4th Vector.
	vector<int> vector_4 = generateVector();
	cout << "The 4th set of data(" << vector_4.size() << "):\n";
	outputUnsorted(vector_4);
	if (!vector_4.empty()) {
		quickSortHelper(vector_4, 0, vector_4.size() - 1);
	}
	outputSorted(vector_4);
	
	// 5th Vector.
	vector<int> vector_5 = generateVector();
	cout << "The 5th set of data(" << vector_5.size() << "):\n";
	outputUnsorted(vector_5);
	if (!vector_5.empty()) {
		quickSortHelper(vector_5, 0, vector_5.size() - 1);
	}
	outputSorted(vector_5);
	
	// 6th Vector.
	vector<int> vector_6 = generateVector();
	cout << "The 6th set of data(" << vector_6.size() << "):\n";
	outputUnsorted(vector_6);
	if (!vector_6.empty()) {
		quickSortHelper(vector_6, 0, vector_6.size() - 1);
	}
	outputSorted(vector_6);
	
	// 7th Vector.
	vector<int> vector_7 = generateVector();
	cout << "The 7th set of data(" << vector_7.size() << "):\n";
	outputUnsorted(vector_7);
	if (!vector_7.empty()) {
		quickSortHelper(vector_7, 0, vector_7.size() - 1);
	}
	outputSorted(vector_7);
	
	// 8th Vector.
	vector<int> vector_8 = generateVector();
	cout << "The 8th set of data(" << vector_8.size() << "):\n";
	outputUnsorted(vector_8);
	if (!vector_8.empty()) {
		quickSortHelper(vector_8, 0, vector_8.size() - 1);
	}
	outputSorted(vector_8);
	
	// 9th Vector.
	vector<int> vector_9 = generateVector();
	cout << "The 9th set of data(" << vector_9.size() << "):\n";
	outputUnsorted(vector_9);
	if (!vector_9.empty()) {
		quickSortHelper(vector_9, 0, vector_9.size() - 1);
	}
	outputSorted(vector_9);

	// 10th Vector.
	vector<int> vector_10 = generateVector();
	cout << "The 10th set of data(" << vector_10.size() << "):\n";
	outputUnsorted(vector_10);
	if (!vector_10.empty()) {
		quickSortHelper(vector_10, 0, vector_10.size() - 1);
	}
	outputSorted(vector_10);

	system("pause");

	return 0;
} // End main