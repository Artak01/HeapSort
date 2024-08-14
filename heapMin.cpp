#include <iostream>
#include "heapMin.h"

MinHeap::MinHeap(std::vector<int>& arr)
    : arr {arr}
{}

void MinHeap::heapify(int size, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < size && arr[left] < arr[smallest]) {
        smallest = left;
    }

    if (right < size && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        std::swap(arr[smallest], arr[i]);
        heapify(size, smallest);
    }
}

void MinHeap::buildMinHeap() {
    for (int i = (arr.size() - 1) / 2; i >= 0; --i) {
        heapify(arr.size(), i);
    }
}

void MinHeap::push(int val)
{
    arr.push_back(val);
    checkIndex(arr.size() - 1);
}

void MinHeap::checkIndex(int ind)
{
    int parent = (ind - 1) / 2;
    while (ind > 0 && arr[parent] > arr[ind]) {
        std::swap(arr[parent], arr[ind]);
        ind = parent;
        parent = (ind - 1) / 2;        
    }
}

void MinHeap::pop()
{
    if (arr.empty()) {
        std::cout << "Is empty!!!" << std::endl;
        return;
    }
    std::swap(arr[0], arr[arr.size() - 1]);
    arr.pop_back();
    heapify(arr.size(), 0);
}

void MinHeap::Sort() 
{
    buildMinHeap();
    for (int i = arr.size() - 1; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        heapify(i, 0);
    }
}

int MinHeap::top()
{
    return arr[0];
}

void MinHeap::print()
{
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}