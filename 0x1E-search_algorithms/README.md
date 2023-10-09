# Search Algorithms



## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)
- [Space Complexity](#space-complexity)

## Linear Search

Linear search, also known as sequential search, is a simple search algorithm that scans through a collection of elements one by one until it finds the desired element or reaches the end of the collection. It is straightforward but may not be efficient for large datasets.

### Usage

```python
def linear_search(arr, target):
    for i, item in enumerate(arr):
        if item == target:
            return i
    return -1

``````

## Binary Search

Binary search is a more efficient search algorithm, particularly for sorted collections. It works by repeatedly dividing the search interval in half until the desired element is found. This algorithm is much faster than linear search for large datasets.

Usage
def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1


Certainly! You can add a section about space complexity to your README.md to explain what O(1) space complexity means. Here's an example of how you can include it:


# Search Algorithms

This repository contains various search algorithms implemented in different programming languages. Search algorithms are fundamental in computer science and are used to find specific elements or values within a data structure or collection.

## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)
- [Space Complexity](#space-complexity)

## Linear Search

Linear search, also known as sequential search, is a simple search algorithm that scans through a collection of elements one by one until it finds the desired element or reaches the end of the collection. It is straightforward but may not be efficient for large datasets.

### Usage

```python
def linear_search(arr, target):
    for i, item in enumerate(arr):
        if item == target:
            return i
    return -1
Binary Search
Binary search is a more efficient search algorithm, particularly for sorted collections. It works by repeatedly dividing the search interval in half until the desired element is found. This algorithm is much faster than linear search for large datasets.

Usage
python
Copy code
def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1
Space Complexity
Space complexity is an important concept in algorithm analysis. It refers to the amount of memory (space) required by an algorithm relative to the size of the input data. One common notation used for space complexity is O(1), which signifies that an algorithm uses a constant amount of memory that doesn't depend on the input size. Algorithms with O(1) space complexity are considered highly efficient in terms of memory usage.

Example of O(1) Space Complexity
An example of an algorithm with O(1) space complexity is swapping two variables without using extra mea = 5
b = 10
a, b = b, a  # Swapping values without using extra memory
mory:

