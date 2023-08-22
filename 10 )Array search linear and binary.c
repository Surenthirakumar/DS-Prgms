#include <stdio.h>


int linearSearch(int arr[], int size, int target) {
	int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;  
}


int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;  
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;  
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Name : U.karthik\nReg no :192210719");
    printf("\nEnter the element to search for: ");
    scanf("%d", &target);


    int linearIndex = linearSearch(arr, size, target);
    if (linearIndex != -1) {
        printf("\nElement %d found at index %d using linear search.\n", target, linearIndex);
    } else {
        printf("\nElement %d not found using linear search.\n", target);
    }

    int binaryIndex = binarySearch(arr, size, target);
    if (binaryIndex != -1) {
        printf("\nElement %d found at index %d using binary search.\n", target, binaryIndex);
    } else {
        printf("\nElement %d not found using binary search.\n", target);
    }

    return 0;
}

