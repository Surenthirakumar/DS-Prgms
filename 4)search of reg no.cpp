#include <stdio.h>

int searchRegistrationNumber(int regNumbers[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (regNumbers[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int size;
    
    printf("Enter the size of the registration number array: ");
    scanf("%d", &size);
    
    int regNumbers[size];
    
    printf("Enter registration numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &regNumbers[i]);
    }
    
    int target;
    printf("Enter the registration number to search for: ");
    scanf("%d", &target);
    
    int index = searchRegistrationNumber(regNumbers, size, target);
    
    if (index != -1) {
        printf("Registration number %d found at index %d.\n", target, index);
    } else {
        printf("Registration number %d not found.\n", target);
    }
    
    return 0;
}

