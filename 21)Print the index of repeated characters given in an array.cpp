#include <stdio.h>
#include <string.h>

void printRepeatedCharacterIndices(const char *str) {
	int i;
    int length = strlen(str);
    int repeated[256] = {0}; 

    for (i = 0; i < length; i++) {
        repeated[(int)str[i]]++;
    }
    printf("Repeated characters and their indices:\n");

    for (i = 0; i < length; i++) {
        if (repeated[(int)str[i]] > 1) {
            printf("Character '%c' is repeated at index %d\n", str[i], i);
            repeated[(int)str[i]] = 0; 
        }
    }
}
int main() {
    char input[100];
	printf("Name :J SURENDHAR\nReg no :192121140");
    printf("\nEnter a string: ");
    scanf("%s", input);
    printRepeatedCharacterIndices(input);
    return 0;
}
