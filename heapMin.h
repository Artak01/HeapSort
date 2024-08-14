// heapMin.h
#ifndef HEAP_MIN_H
#define HEAP_MIN_H

#include <vector>

class MinHeap {
public:
    MinHeap(std::vector<int>& vec);
    void buildMinHeap();
    void push(int val);
    void pop();
    void print();
    int top();

    void Sort();

private:
    std::vector<int>& arr;
    void heapify(int size, int i);
    void checkIndex(int ind);
};

#endif // HEAP_MIN_H
