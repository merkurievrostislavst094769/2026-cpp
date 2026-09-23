#pragma once
#include <vector>

#define SORTLIB_API __declspec(dllexport)

namespace SortLibrary {
    SORTLIB_API void bubbleSort(std::vector<int>& arr);
    SORTLIB_API void insertionSort(std::vector<int>& arr);
    SORTLIB_API void selectionSort(std::vector<int>& arr);
    SORTLIB_API void mergeSort(std::vector<int>& arr);
    SORTLIB_API void quickSort(std::vector<int>& arr);
    SORTLIB_API void heapSort(std::vector<int>& arr);
}
