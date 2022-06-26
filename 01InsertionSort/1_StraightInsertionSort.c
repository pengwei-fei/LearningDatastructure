#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void StraightInsertionSort(int *arr, int size) {
    for (int i = 1; i < size; ++i) {
        int j = i - 1;
        for (; j >= 0; --j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {3, 2, 4, 1, 7, 4,223,444,5555,333,1223,65,454,32,43,54};
    int size = sizeof(arr) / sizeof(arr[0]);
    StraightInsertionSort(arr, size);
    printArray(arr,size);
    return 0;
}