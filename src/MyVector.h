#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int* data;
    int size;
    int capacity;

    void resize();

public:
    MyVector();
    ~MyVector();

    void push_back(int value);
    int operator[](int index);
    int getSize();
};

#endif