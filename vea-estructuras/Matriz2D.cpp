#include "Matriz2D.hpp"

template <class T>
Matriz2D<T>::Matriz2D(int rows, int cols) : rows(rows), cols(cols) {
    matrix.resize(rows, vector<T>(cols));
}

template <class T>
void Matriz2D<T>::setElement(int row, int col, T elem) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        matrix[row][col] = elem;
    } else {
        cout << "Invalid position!" << endl;
    }
}

template <class T>
T Matriz2D<T>::getElement(int row, int col) const {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        return matrix[row][col];
    } else {
        cout << "Invalid position!" << endl;
        return T(); // return default initialization of T
    }
}

template <class T>
void Matriz2D<T>::displayMatrix() const {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

template <class T>
void Matriz2D<T>::updateElement(int row, int col, T newElem) {
    setElement(row, col, newElem);
}

template <class T>
void Matriz2D<T>::deleteElement(int row, int col) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        // Using a default value for "deleting"
        matrix[row][col] = T();
    } else {
        cout << "Invalid position!" << endl;
    }
}