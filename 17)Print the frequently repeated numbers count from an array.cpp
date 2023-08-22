#include <stdio.h>

void findFrequentCounts(int arr[], int size) {
	int i,j;
	printf("Name :J SURENDHAR\nReg no :192121140");
    printf("\nFrequently repeated numbers and their counts:\n");

    for (i = 0; i < size; i++) {
        int count = 0;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                
                arr[j] = -1;
            }
        }
        if (count > 0) {
            printf("%d occurs %d times\n", arr[i], count + 1);
        }
    }
}

int main() {
    int arr[] = {3, 5, 7, 2, 5, 3, 9, 8, 7, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequentCounts(arr, size);

    return 0;
}

