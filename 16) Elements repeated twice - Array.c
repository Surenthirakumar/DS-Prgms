#include <stdio.h>

void findRepeatedTwice(int arr[], int size) {
	int i,j;
	printf("Name : J SURENTHIRA KUMAR\nReg no :192121140");
    printf("\nElements repeated twice: ");
    
    for (i = 0; i < size; i++) {
        int count = 0;
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
}

int main() {
    int arr[] = {3, 5, 7, 2, 5, 3, 9, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findRepeatedTwice(arr, size);
    
    return 0;
}

