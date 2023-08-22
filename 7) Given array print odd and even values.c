#include <stdio.h>

int main() {
	printf("Name : J SURENTHIRA KUMAR\nReg no :192121140");
	int i;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);

    printf("\nOdd values: ");
    for (i = 0; i < length; i++) {
        if (array[i] % 2 != 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    printf("\nEven values: ");
    for (i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}

