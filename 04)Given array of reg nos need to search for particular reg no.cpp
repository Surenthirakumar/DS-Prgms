#include <stdio.h>

int searchRegistrationNumber(int regNumbers[], int size, int targetRegNo) 
{
	int i;
	printf("Name : J SURENTHIRA KUMAR\nReg no :192121140");
    for (i = 0; i < size; i++) {
        if (regNumbers[i] == targetRegNo) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int regNumbers[] = {123, 456, 789, 234, 567, 890};
    int size = sizeof(regNumbers) / sizeof(regNumbers[0]);

    int targetRegNo;
    printf("\nEnter the registration number to search for: ");
    scanf("%d", &targetRegNo);

    int foundIndex = searchRegistrationNumber(regNumbers, size, targetRegNo);

    if (foundIndex != -1) {
        printf("\nRegistration number %d found at index %d.\n", targetRegNo, foundIndex);
    } else {
        printf("\nRegistration number %d not found.\n", targetRegNo);
    }

    return 0;
}

