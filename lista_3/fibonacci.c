#include <stdio.h>

long int fibonacci_nums[81] = {0};

long int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;

    if (fibonacci_nums[n] != 0)
        return fibonacci_nums[n];

    fibonacci_nums[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return fibonacci_nums[n];
}

