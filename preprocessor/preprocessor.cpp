#include <iostream>
#include <cstdlib>
#define INTEGER 1
#define DOUBLE 2
#define CHAR 3
#define TYPE CHAR
#include "preprocessor.h"

using namespace std;

int main() {
    const int size = 10;

#if TYPE == INTEGER
    int intArray[size];
    RANDOM_ARRAY(intArray, size);
    cout << "Integer array: ";
    SHOW_ARRAY(intArray, size);

    int minInt = FIND_MIN(intArray, size);
    int maxInt = FIND_MAX(intArray, size);
    cout << "Minimum: " << minInt << endl;
    cout << "Maximum: " << maxInt << endl;

    EDIT_ARRAY(intArray, size, 2, 100);
    cout << "Edited integer array: ";
    SHOW_ARRAY(intArray, size);

    SORT_ARRAY(intArray, size);
    cout << "Sorted integer array: ";
    SHOW_ARRAY(intArray, size);
#endif


#if TYPE == DOUBLE

    double doubleArray[size];
    RANDOM_ARRAY(doubleArray, size);
    cout << "Double array: ";
    SHOW_ARRAY(doubleArray, size);

    double minDouble = FIND_MIN(doubleArray, size);
    double maxDouble = FIND_MAX(doubleArray, size);
    cout << "Minimum: " << minDouble << endl;
    cout << "Maximum: " << maxDouble << endl;

    EDIT_ARRAY(doubleArray, size, 2, 10.5);
    cout << "Edited double array: ";
    SHOW_ARRAY(doubleArray, size);

    SORT_ARRAY(doubleArray, size);
    cout << "Sorted double array: ";
    SHOW_ARRAY(doubleArray, size);
#endif

#if TYPE == CHAR

    char charArray[size];
    RANDOM_ARR(charArray, size);
    cout << "Char array: ";
    SHOW_ARR(charArray, size);

    char minChar = FIND_MINCHAR(charArray, size);
    char maxChar = FIND_MAXCHAR(charArray, size);
    cout << "Minimum: " << minChar << endl;
    cout << "Maximum: " << maxChar << endl;

    EDIT_ARR(charArray, size, 2, 'Z');
    cout << "Edited char array: ";
    SHOW_ARR(charArray, size);

    SORT_ARR(charArray, size);
    cout << "Sorted char array: ";
    SHOW_ARR(charArray, size);

#endif

    return 0;
}


/*#include <iostream>
#include <cstdlib>
#include "preprocessor.h"
using namespace std;

#define INTEGER  1
#define CHAR 2
#define DOUBLE 3

int main() {

    int choice = INTEGER;

#if INTEGER == choice

    const int size = 10;
    int intArray[size];

    RandomArrayIntValue(intArray, size);
    cout << "Integer array: ";
    ShowIntArray(intArray, size);

    int minInt = FindMinIntArray(intArray, asize);
    int maxInt = FindMaxIntArray(intArray, size);

    cout << "Minimum: " << minInt << endl;
    cout << "Maximum: " << maxInt << endl;

    EditIntArray(intArray, size, 2, 100);
    cout << "Edit integer array: ";
    ShowIntArray(intArray, size);

    SortIntArray(intArray, size);
    cout << "Sorted integer array: ";
    ShowIntArray(intArray, size);

#elif DOUBLE == choice

    const int size = 10;
    double doubleArray[size];

    RandomArrayDoubleValue(doubleArray, size);
    cout << "Double array: ";
    ShowDoubleArray(doubleArray, size);

    double minDouble = FindMinDoubleArray(doubleArray, size);
    double maxDouble = FindMaxDoubleArray(doubleArray, size);

    cout << "Minimum: " << minDouble << endl;
    cout << "Maximum: " << maxDouble << endl;

    EditDoubleArray(doubleArray, size, 2, 10.5);

    cout << "Edit double array: ";
    ShowDoubleArray(doubleArray, size);

    SortDoubleArray(doubleArray, size);
    cout << "Sorted double array: ";
    ShowDoubleArray(doubleArray, size);

#elif CHAR == choice

    const int size = 10;
    char charArray[size];

    RandomArrayCharValue(charArray, size);
    cout << "Char array: ";
    ShowCharArray(charArray, size);

    char minChar = FindMinCharArray(charArray, size);
    char maxChar = FindMaxCharArray(charArray, size);

    cout << "Minimum: " << minChar << endl;
    cout << "Maximum: " << maxChar << endl;

    EditCharArray(charArray, size, 2, 'Z');
    cout << "Edit char array: ";
    ShowCharArray(charArray, size);

    SortCharArray(charArray, size);
    cout << "Sorted char array: ";
    ShowCharArray(charArray, size);

#endif

    return 0;
}
*/


