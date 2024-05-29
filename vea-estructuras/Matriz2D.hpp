#ifndef MATRIZ2D_H
#define MATRIZ2D_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Matriz2D {
private:
    vector<vector<T>> matrix;
    int rows;
    int cols;

public:
    Matriz2D(int rows, int cols);
    ~Matriz2D() = default;
    void setElement(int row, int col, T elem);
    T getElement(int row, int col) const;
    void displayMatrix() const;
    void updateElement(int row, int col, T newElem);
    void deleteElement(int row, int col);
};

#include "Matriz2D.cpp"

#endif // MATRIZ2D_H