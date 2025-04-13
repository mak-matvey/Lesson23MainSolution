#include "logic.h"

bool is_palindrome(int number)
{
    number = number < 0 ? -number : number;

    int original = number;
    int reversed = 0;

    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return original == reversed;
}