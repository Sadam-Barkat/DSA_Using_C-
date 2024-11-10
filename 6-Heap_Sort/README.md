# Heap Sort in C++

The `Heap_Sort` folder contains the implementation of the Heap Sort algorithm in C++. Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It is an in-place algorithm with O(n log n) time complexity, making it efficient for large datasets.

## Description

Heap Sort works by first building a max heap from the input data. A max heap is a binary tree where the parent node is greater than or equal to its children. After building the heap, the root element (maximum element) is swapped with the last element in the heap, and the heap size is reduced by one. The heap property is then restored by "heapifying" the affected subtree. This process is repeated until the heap is empty.

## Features

- **Time Complexity:** O(n log n) in both average and worst cases.
- **Space Complexity:** O(1) as it is an in-place sorting algorithm.
- **Stable:** Not stable, as equal elements might not retain their relative order.
- **In-Place Sorting:** Does not require additional storage beyond the input array.

git clone https://github.com/Sadam-Barkat/6-Heap_Sort.git

