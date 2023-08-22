#include <stdio.h>

int main() {
    int array[] = {12, 7, 15, 9, 21, 25};
    int size = sizeof(array) / sizeof(array[0]);
    int i;

   
    int max = array[0];
    for (i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }


    int present[max + 1];
    for (i = 0; i <= max; i++) {
        present[i] = 0;
    }

    
    for (i = 0; i < size; i++) {
        present[array[i]] = 1;
    }

    printf("Name : J SURENTHIRA KUMAR\nReg no :192121140");
    printf("\nMissing element(s): ");
    for (i = 1; i <= max; i++) {
        if (!present[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

