#include <iostream>
#include "MyVector.h"

int main() {
    MyVector v;

    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    for (int i = 0; i < v.getSize(); i++) {
        std::cout << v[i] << std::endl;
    }

    return 0;
}