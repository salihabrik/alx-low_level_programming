# Search Algorithms in C

This repository contains various search algorithms implemented in the C programming language. Search algorithms are fundamental in computer science and are used to find specific elements or values within a data structure or collection.

## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)
- [Space Complexity in C](#space-complexity-in-c)

## Linear Search

Linear search, also known as sequential search, is a simple search algorithm that scans through a collection of elements one by one until it finds the desired element or reaches the end of the collection. It is straightforward but may not be efficient for large datasets.

### Usage (C)

Here's an example of linear search implemented in C:

```c
#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int result = linear_search(arr, 5, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}


```

## Binary Search

Binary search is a more efficient search algorithm, particularly for sorted collections. It works by repeatedly dividing the search interval in half until the desired element is found. This algorithm is much faster than linear search for large datasets.

### Usage (C)
Here's an example of binary search implemented in C:

```c
#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int result = binary_search(arr, 5, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}

```



```
AUTHORS

- [salihabrik](https://github.com/salihabrik)
-

```