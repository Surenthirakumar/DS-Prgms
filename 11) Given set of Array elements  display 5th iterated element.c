#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(array) / sizeof(array[0]);

    if (size >= 5) {
        int fifthElement = array[4];  
        printf("Name : U.karthik\nReg no :192210719");
        printf("\nThe fifth element is: %d\n", fifthElement);
    } else {
    	printf("Name : U.karthik\nReg no :192210719");
        printf("\nArray does not have at least 5 elements.\n");
    }

    return 0;
}

