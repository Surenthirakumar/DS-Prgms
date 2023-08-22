#include <stdio.h>

int findElementLocation(int arr[], int size, int target) 

{
	printf("SK\n 1140\n");
	
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {12, 45, 67, 23, 56, 89, 34, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 56;

    int location = findElementLocation(arr, size, target);

    if (location != -1) {
        printf("Element %d found at index %d\n", target, location);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}

