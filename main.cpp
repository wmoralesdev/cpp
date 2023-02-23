#include <iostream>
using namespace std;

void pass_by_value(int);
void pass_by_ref(int&);
void pass_by_ptr(int*);

// Alias al tipo
// r = 0, g = 1, b = 2

typedef int Color;
typedef int** Mtx;

int main(void) {
    Mtx m1, m2;
//    int array_size;
//    cin >> array_size;
//    int* dynamic_array = new int[array_size];
//
//    // 1. No se el tamano en tiempo de compilacion
//    // 2. No se dond estan las posiciones alocadas
//    // 3. No puedo cambiar el tamano d manera dinamica
//    int array_exp[array_size];
//
//    for (int i = 0; i < array_size; i++) cout << array_exp[i] << endl;
    int* ptr;       // Direccion de memoria -> Consultar la info
    int num = 10;   // Valor 10

//    ptr = &num;
//    cout << *ptr << endl;
//
//    *ptr = 20;
//    cout << *ptr << endl;

    pass_by_value(num);
    cout << num << endl;

    pass_by_ref(num);
    cout << num << endl;

    pass_by_ptr(ptr);
    cout << num << endl;

    return 0;
}

// Recibe una copia del valor del paramero enviado
void pass_by_value(int a) {
    a = -1;
}

// num -> 0x01
// 0x01
void pass_by_ref(int& a) {
    a = -1;
}

// ptr -> 0x02 -> 0x01
// num -> 0x01
// 0x01
void pass_by_ptr(int* a) {
    *a = -2;
}

// chimopecs
void swap(Mtx* m1, Mtx* m2) {
    Mtx* temp = m1;
    m1 = m2;
    m2 = temp;
}