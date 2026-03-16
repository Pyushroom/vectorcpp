#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int* data;      // wskaźnik na dynamicznie alokowaną tablicę przechowującą elementy
    int size;       // liczba elementów w wektorze
    int capacity;   // maksymalna liczba elementów

    // Zwiększa pojemność tablicy  i kopiuje stare elementy
    void resize();

public:
    // Konstruktor - inicjalizuje pusty wektor
    MyVector();

    // Destruktor - zwalnia pamięć zaalokowaną przez new[]
    ~MyVector();

    // Dodaje element na koniec wektora
    void push_back(int value);

    // Usuwa ostatni element wektora
    void pop_back();

    // Operator indeksowania - pozwala używać v[i]
    int operator[](int index);

    // Zwraca aktualną liczbę elementów
    int getSize();
};

#endif