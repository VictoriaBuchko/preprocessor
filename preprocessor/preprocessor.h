#pragma once


/*
#ifdef INTEGER
void RandomArrayIntValue(int* array, int size);
void ShowIntArray(int* array, int size);
int FindMinIntArray(int* array, int size);
int FindMaxIntArray(int* array, int size);
void EditIntArray(int* array, int size, int index, int newValue);
void SortIntArray(int* array, int size);
#endif

#ifdef DOUBLE
void RandomArrayDoubleValue(double* array, int size);
void ShowDoubleArray(double* array, int size);
double FindMinDoubleArray(double* array, int size);
double FindMaxDoubleArray(double* array, int size);
void EditDoubleArray(double* array, int size, int index, double newValue);
void SortDoubleArray(double* array, int size);
#endif

#ifdef CHAR
void RandomArrayCharValue(char* array, int size);
void ShowCharArray(char* array, int size);
char FindMinCharArray(char* array, int size);
char FindMaxCharArray(char* array, int size);
void EditCharArray(char* array, int size, int index, char newValue);
void SortCharArray(char* array, int size);
#endif
*/


#ifdef INTEGER

void RandomArrayIntValue(int* array, int size);
void ShowIntArray(int* array, int size);
int FindMinIntArray(int* array, int size);
int FindMaxIntArray(int* array, int size);
void EditIntArray(int* array, int size, int index, int newValue);
void SortIntArray(int* array, int size);

#define RANDOM_ARRAY RandomArrayIntValue 
#define SHOW_ARRAY ShowIntArray
#define FIND_MIN FindMinIntArray
#define FIND_MAX FindMaxIntArray
#define EDIT_ARRAY EditIntArray
#define SORT_ARRAY SortIntArray
#endif



#ifdef DOUBLE
void RandomArrayDoubleValue(double* array, int size);
void ShowDoubleArray(double* array, int size);
double FindMinDoubleArray(double* array, int size);
double FindMaxDoubleArray(double* array, int size);
void EditDoubleArray(double* array, int size, int index, double newValue);
void SortDoubleArray(double* array, int size);

#define RANDOM_ARRAY RandomArrayDoubleValue
#define SHOW_ARRAY ShowDoubleArray
#define FIND_MIN FindMinDoubleArray
#define FIND_MAX FindMaxDoubleArray
#define EDIT_ARRAY EditDoubleArray
#define SORT_ARRAY SortDoubleArray
#endif

#ifdef CHAR
void RandomArrayCharValue(char* array, int size);
void ShowCharArray(char* array, int size);
char FindMinCharArray(char* array, int size);
char FindMaxCharArray(char* array, int size);
void EditCharArray(char* array, int size, int index, char newValue);
void SortCharArray(char* array, int size);

#define RANDOM_ARR RandomArrayCharValue
#define SHOW_ARR ShowCharArray
#define FIND_MINCHAR FindMinCharArray
#define FIND_MAXCHAR FindMaxCharArray
#define EDIT_ARR EditCharArray
#define SORT_ARR SortCharArray
#endif
