#include <stdio.h>

int main() {
	printf("\nNAME:J SURENDHAR\n REG NO : 192121140");
    int list1[] = {'1', '2', '3'};
    int size1 = sizeof(list1) / sizeof(list1[0]);

    int list2[] = {4, 5, 6};
    int size2 = sizeof(list2) / sizeof(list2[0]);

    int mergedSize = size1 + size2;
    int mergedList[mergedSize];
    for (int i = 0; i < size1; i++) {
        mergedList[i] = list1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedList[size1 + i] = list2[i];
    }
    printf("\n Merged list: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedList[i]);
    }
    return 0;
}
