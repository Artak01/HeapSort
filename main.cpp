#include <iostream>
#include <vector>
#include "heapMin.h"

int main() {
    std::vector<int> vec = {1, 25, 7, 11, 15, 30, 12, 12, 9, 8, 20};
    MinHeap ob(vec);
    ob.buildMinHeap();

    std::cout << "Min heap after building: ";
    ob.print();

    ob.push(5);
    std::cout << "Min heap after pushing 5: ";
    ob.print();

    ob.push(3);
    std::cout << "Min heap after pushing 3: ";
    ob.print();

    std::cout << "Min element: " << ob.top() << std::endl;

    ob.pop();
    std::cout << "Min heap after popping: ";
    ob.print();

    ob.Sort();
    std::cout << "Array after heap sort: ";
    ob.print();

    return 0;
}
