#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char input[100];
    printf("Name : U.karthik\nReg no :192210719");

    printf("\nEnter a string: ");
    scanf("%s", input);

    int length = strlen(input);
    
    
    qsort(input, length, sizeof(char), compareChars);

    printf("Sorted string: %s\n", input);

    return 0;
}

