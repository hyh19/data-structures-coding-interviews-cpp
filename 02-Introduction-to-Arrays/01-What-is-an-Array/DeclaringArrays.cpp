#include <iostream>

using namespace std;

int main() {
    const int size = 10;

    int *dynamicArray = new int[size];

    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i;
    }

    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << "\t";
    }
    cout << endl;

    delete[] dynamicArray;

    int staticArray[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : staticArray) {
        cout << i << "\t";
    }
    cout << endl;

    float staticArray2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    int num = sizeof(staticArray2) / sizeof(staticArray2[0]);

    for (int i = 0; i < num; i++) {
        cout << staticArray2[i] << "\t";
    }
    cout << endl;

    return 0;
}
