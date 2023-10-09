# Search Algorithms

This repository contains various search algorithms implemented in different programming languages. Search algorithms are fundamental in computer science and are used to find specific elements or values within a data structure or collection.

## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)

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
