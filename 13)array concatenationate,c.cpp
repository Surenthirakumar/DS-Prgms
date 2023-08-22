#include <stdio.h>

void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int sizeResult = size1 + size2;
    int result[sizeResult];

    concatenateArrays(arr1, size1, arr2, size2, result);
	printf("Name : J SURENTHIRA KUMAR\nReg no :192121140");
    printf("\nConcatenated array: ");
    for (int i = 0; i < sizeResult; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}


