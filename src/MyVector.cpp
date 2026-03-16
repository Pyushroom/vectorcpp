#include "MyVector.h"

MyVector::MyVector() {
    capacity = 2;
    size = 0;
    data = new int[capacity];
}

MyVector::~MyVector() {
    delete[] data;
}


void MyVector::push_back(int value) {
    if(size == capacity){
        resize();
    }
    data[size++] = value;
}

void MyVector::resize() {
    capacity *2;
    int* newData = new int[capacity];
    for(int i = 0; i < size; i++){
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;

}

int MyVector::operator[](int index) {
    return 0;
}

int MyVector::getSize() {
    return 0;
}
