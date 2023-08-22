#include <stdio.h>
#include <limits.h>

int reverseInt(int num) {
    int reversed = 0;

    while (num != 0) {
        
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            return 0; 
        }

        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int num;
    printf("J Surenthira kumar\n192121140");
    
    printf("\nEnter a 32-bit signed integer: ");
    scanf("%d", &num);

    int reversed = reverseInt(num);

    printf("Reversed integer: %d\n", reversed);

    return 0;
}

