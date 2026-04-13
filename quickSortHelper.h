// Name: Ryan Griffiths
// Assignment: A7
// Course: CISP 400
// File name: quickSortHelper.h
// Purpose: Header file containing function prototypes.

#ifndef QUICKSORTHELPER_H
#define QUICKSORTHELPER_H

#include <vector>
using namespace std;

// Function prototypes
vector<int> generateVector(); // create vector size(0-20), random elements(0-100)
void quickSortHelper(vector<int>&, size_t, size_t); // sort one-dimensional vector of int elements
size_t partition(vector<int>&, size_t, size_t); // Partition the vector
void outputUnsorted(vector<int>&); // print ability for unsorted vector
void outputSorted(vector<int>&); // print ability for sorted vector

#endif