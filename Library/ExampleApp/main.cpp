#include <iostream>
#include <vector>
#include "SortingAlgorithms.h"

using namespace std;

void print(const std::vector<int>& v) {
    for (int n : v) std::cout << n << " ";
    cout << "\n";
}

int main() {
    vector<int> base = { 5, 2, 9, 1, 5, 6 };

    vector<int> data;

    data = base;
    cout << "Bubble\n  Before: "; print(data);
    SortLibrary::bubbleSort(data);
    cout << "  After:  "; print(data); std::cout << "\n";

    data = base;
    cout << "Insertion\n  Before: "; print(data);
    SortLibrary::insertionSort(data);
    cout << "  After:  "; print(data); std::cout << "\n";

    data = base;
    cout << "Selection\n  Before: "; print(data);
    SortLibrary::selectionSort(data);
    cout << "  After:  "; print(data); std::cout << "\n";

    data = base;
    cout << "Merge\n  Before: "; print(data);
    SortLibrary::mergeSort(data);
    cout << "  After:  "; print(data); std::cout << "\n";

    data = base;
    cout << "Quick\n  Before: "; print(data);
    SortLibrary::quickSort(data);
    cout << "  After:  "; print(data); std::cout << "\n";

    data = base;
    cout << "Heap\n  Before: "; print(data);
    SortLibrary::heapSort(data);
    cout << "  After:  "; print(data); std::cout << "\n";

    return 0;
}