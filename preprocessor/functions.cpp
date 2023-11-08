#pragma once
#include "preprocessor.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/*
a) функцию для заполнения массива случайными значениями;
b) функцию для вывода значений массива на консоль ;
c) функцию для поиска минимального элемента;
d) функцию для поиска максимального элемента;
e) функцию для сортировки;
f) функцию для редактирования значения массива.
*/

void RandomArrayIntValue(int* array, int size) {

    for (int i = 0; i < size; i++) {

        array[i] = rand();

    }
}

void ShowIntArray(int* array, int size) {

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int FindMinIntArray(int* array, int size) {

    int min = array[0];

    for (int i = 1; i < size; i++) {

        if (array[i] < min) {

            min = array[i];
        }
    }
    return min;
}


int FindMaxIntArray(int* array, int size) {

    int max = array[0];
    for (int i = 1; i < size; i++) {

        if (array[i] > max) {

            max = array[i];
        }
    }
    return max;
}

void EditIntArray(int* array, int size, int index, int newValue) {

    if (index >= 0 && index < size) {

        array[index] = newValue;
    }
}

void SortIntArray(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {

        int minIndex = i;
        for (int j = i + 1; j < size; j++) {

            if (array[j] < array[minIndex]) {

                minIndex = j;
            }
        }

        if (minIndex != i) {

            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}


void RandomArrayDoubleValue(double* array, int size) {

    for (int i = 0; i < size; i++) {

        array[i] = (double)rand() / RAND_MAX * (25.0 - 0.01) + 0.01;

    }
}

void ShowDoubleArray(double* array, int size) {

    for (int i = 0; i < size; i++) {

        cout << array[i] << " ";
    }
    cout << endl;
}

double FindMinDoubleArray(double* array, int size) {

    double min = array[0];
    for (int i = 1; i < size; i++) {

        if (array[i] < min) {

            min = array[i];
        }
    }
    return min;
}

double FindMaxDoubleArray(double* array, int size) {

    double max = array[0];
    for (int i = 1; i < size; i++) {

        if (array[i] > max) {

            max = array[i];
        }
    }
    return max;
}

void EditDoubleArray(double* array, int size, int index, double newValue) {

    if (index >= 0 && index < size) {

        array[index] = newValue;
    }
}


void SortDoubleArray(double* array, int size) {

    for (int i = 0; i < size - 1; i++) {

        int minIndex = i;
        for (int j = i + 1; j < size; j++) {

            if (array[j] < array[minIndex]) {

                minIndex = j;
            }
        }
        if (minIndex != i) {

            double temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}


void RandomArrayCharValue(char* array, int size) {

    for (int i = 0; i < size; i++) {

        array[i] = 'A' + rand() % 26;
    }
}

void ShowCharArray(char* array, int size) {

    for (int i = 0; i < size; i++) {

        cout << array[i] << " ";
    }
    cout << endl;
}

char FindMinCharArray(char* array, int size) {

    char min = array[0];
    for (int i = 1; i < size; i++) {

        if (array[i] < min) {

            min = array[i];
        }
    }
    return min;
}

char FindMaxCharArray(char* array, int size) {

    char max = array[0];
    for (int i = 1; i < size; i++) {

        if (array[i] > max) {

            max = array[i];
        }
    }
    return max;
}

void SortCharArray(char* array, int size) {

    for (int i = 0; i < size - 1; i++) {

        int minIndex = i;
        for (int j = i + 1; j < size; j++) {

            if (array[j] < array[minIndex]) {

                minIndex = j;
            }
        }
        if (minIndex != i) {

            char temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}


void EditCharArray(char* array, int size, int index, char newValue) {

    if (index >= 0 && index < size) {

        array[index] = newValue;
    }
}