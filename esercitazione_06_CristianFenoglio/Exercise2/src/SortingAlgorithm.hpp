#pragma once

#include <iostream>
#include <vector>


namespace SortLibrary {

template<typename T>
concept Sortable = requires(T& t) {
    {t < t} -> std::convertible_to<bool>;
};

// HeapSort
template<Sortable T>
void heapify(std::vector<T>& arr, int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        T temp=arr[i];
        arr[i]= arr[largest];
        arr[largest]= temp;
        heapify(arr, n, largest);
    }
}

template<Sortable T>
void heapSort(std::vector<T>& arr) {
    int n = arr.size();

    for (int i = n/2 -1; i >= 0; --i)
        heapify(arr, n, i);

    for (int i = n-1; i > 0; --i) {
        T temp=arr[0];
        arr[0]= arr[i];
        arr[i]= temp;
   
        heapify(arr, i, 0);
    }
}


template<Sortable T>
void bubbleSort(std::vector<T>& arr)
{
    bool swapped;
    for (size_t i = 0; i < arr.size(); ++i) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                T temp=arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp;
                swapped = true;
            }
        }
        if (!swapped) break; 
    }
}


}

