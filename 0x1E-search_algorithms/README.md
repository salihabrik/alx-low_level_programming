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


Certainly! Below is an example of a README.md file for a repository containing search algorithms implemented in C, along with an explanation of space complexity in C:

markdown
Copy code
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
Binary Search
Binary search is a more efficient search algorithm, particularly for sorted collections. It works by repeatedly dividing the search interval in half until the desired element is found. This algorithm is much faster than linear search for large datasets.

Usage (C)
Here's an example of binary search implemented in C:

c
Copy code
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
## Space Complexity in C

Space complexity is an important concept in algorithm analysis. It refers to the amount of memory (space) required by an algorithm relative to the size of the input data. One common notation used for space complexity is O(1), which signifies that an algorithm uses a constant amount of memory that doesn't depend on the input size. Algorithms with O(1) space complexity are considered highly efficient in terms of memory usage.

Example of O(1) Space Complexity in C
An example of an algorithm with O(1) space complexity in C is swapping two variables without using extra memory:

```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
    
    ```