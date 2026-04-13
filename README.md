# Cpp-QuickSort

C++ implementation of the Quick Sort algorithm using recursion and partitioning.

## Features
- Random vector generation (size 0–20, values 0–100)
- Quick sort using recursive divide-and-conquer
- Partition-based sorting
- Formatted console output for unsorted and sorted data

## Structure
- `src/` – implementation files
  - quick sort logic
  - partition function
  - vector generation
- `include/` – helper/header files
- 'instructions/' - project instructions 

## How It Works
1. A vector of random integers is generated.
2. The quick sort algorithm recursively partitions the vector.
3. Elements are rearranged around a pivot (anchor value).
4. The sorted vector is printed to the console.

## Example Output
Initial vector:
34 12 89 3 45 

Sorted vector: 
3 12 34 45 89 

## Concepts Demonstrated
- Recursion
- Divide and conquer algorithms
- In-place sorting
- Vector manipulation in C++

## Notes
This project was separated from a larger repository containing coursework from an Object-Oriented Programming course in C++. It demonstrates core OOP principles such as class design, encapsulation, and data management.
