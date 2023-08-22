#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Name : U.karthik\nReg no :192210719");

    printf("\nEnter a string: ");
    scanf("%s", input);

 
    if (strlen(input) > 0) {
        printf("The input is a valid string.\n");
    } else {
        printf("The input is not a valid string.\n");
    }

    return 0;
}

