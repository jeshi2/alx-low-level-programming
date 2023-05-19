#include <stdio.h>

int is_palindrome(int n) {
    int reverse = 0;
    int original = n;
    int digit;

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return original == reverse;
}

int main() {
	FILE *file;	
    int i, j;
    int largest_palindrome = 0;

    for (i = 999; i >= 100; i--) {
        for (j = i; j >= 100; j--) {
            int product = i * j;
            if (product > largest_palindrome && is_palindrome(product)) {
                largest_palindrome = product;
            }
        }
    }

    
    file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largest_palindrome);
        fclose(file);
    }

    return 0;
}
