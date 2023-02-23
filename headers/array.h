//
// Created by walte on 2/22/2023.
//

#ifndef CPP_ARRAY_H
#define CPP_ARRAY_H

#include <iostream>

// Unidimensional -> [ , , , , , , ]
struct array {
    int size;
    int* items;

    array() { items = nullptr; }
    array(int _size) : size(_size) {
        // items = (int*) malloc(_siz); // free
        this->items = new int[_size];

        for (auto i = 0; i < _size; i++) this->items[i] = -1;
    }

    void print() {
        for (auto i = 0; i < this->size; i++) std::cout << *(this->items + i) << std::endl;
    }

    void set(int pos, int item) {
        this->items[pos] = item;
    }

    int get(int pos) {
        return this->items[pos];
    }
};

#endif //CPP_ARRAY_H
