//
// Created by walte on 2/22/2023.
//

#ifndef CPP_MATRIX_H
#define CPP_MATRIX_H

struct mtx {
    int rows, cols;
    int** items;

    mtx() { items = nullptr; }
    mtx(int _rows, int _cols) : rows(_rows), cols(_cols) {
        // 1. Reservar para filas
        this->items = new int*[_rows];
        /*
         * [
         *      NULL, -> [x, x, x]
         *      NULL, -> [x, x, x]
         *      NULL, -> [x, x, x]
         * ]
         */

        // 2. Reservar para cada columna
        for (auto i = 0; i < rows; i++) this->items[i] = new int[cols];
    }
};

#endif //CPP_MATRIX_H
