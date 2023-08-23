#include <stdio.h>

int reverse_digits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int make_palindrome(int num) {
    int last_two_digits = num % 100;
    int reversed_last_two_digits = reverse_digits(last_two_digits);
    int palindrome = num * 100 + reversed_last_two_digits;

    return palindrome;
}

int is_product_of_two_three_digit_numbers(int num) {
    for (int factor = 999; factor >= 100; factor--) {
        if (num % factor == 0) {
            int quotient = num / factor;
            if (quotient >= 100 && quotient <= 999) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int max_palindrome = -1;

    for (int num = 88; num >= 0; num--) {
        int palindrome = make_palindrome(num);
        int result = palindrome * 10 + 900009;

        if (is_product_of_two_three_digit_numbers(result)) {
            max_palindrome = result;
            break;
        } else {
            result = palindrome * 10 + 800008;
            if (is_product_of_two_three_digit_numbers(result)) {
                max_palindrome = result;
                break;
            } else {
                result = palindrome * 10 + 1001;
                if (is_product_of_two_three_digit_numbers(result)) {
                    max_palindrome = result;
                    break;
                }
            }
        }

        printf("Number: %d, Palindrome: %d, Result: %d\n", num, palindrome, result);
    }

    if (max_palindrome != -1) {
        printf("The highest palindrome that is a product of two three-digit numbers is: %d\n", max_palindrome);
    } else {
        printf("No such palindrome found.\n");
    }

    return 0;
}
