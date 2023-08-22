#include <stdio.h>


int recursiveFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * recursiveFactorial(n - 1);
    }
}


int iterativeFactorial(int n) {
	int i;
    int result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Name : J SURENDHAR\nReg no :192121140");
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("\nFactorial is not defined for negative numbers.\n");
    } else {
        int recursiveResult = recursiveFactorial(num);
        printf("\nFactorial of %d using recursion is %d\n", num, recursiveResult);

        int iterativeResult = iterativeFactorial(num);
        printf("\nFactorial of %d without recursion is %d\n", num, iterativeResult);
    }

    return 0;
}

