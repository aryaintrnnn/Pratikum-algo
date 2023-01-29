#include <iostream>

using namespace std;

void insertionSortDesc(int array[], int a) {
    int i, kunci, j;
    for (i = 1; i < a; i++) {
        kunci = array[i];
        j = i - 1;
        while (j >= 0 && array[j] < kunci) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = kunci;
    }
}

void printarrayay(int array[], int a) {
    for (int i = 0; i < a; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int array[] = { 10, 25, 11, 2, 7 };
    int a = sizeof(array) / sizeof(array[0]);

    insertionSortDesc(array, a);
    printarrayay(array, a);

    return 0;
}
