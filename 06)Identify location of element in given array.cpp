#include <stdio.h>

int main() {
	printf("Name : J SURENTHIRA KUMAR\nReg no :192121140");
	int i;
    int numbers[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int elementToFind = 8;
    int found = 0;

    for (i = 0; i < size; i++) {
        if (numbers[i] == elementToFind) {
        	
            printf("\nElement %d found at index %d\n", elementToFind, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nElement %d not found in the array.\n", elementToFind);
    }

    return 0;
}

