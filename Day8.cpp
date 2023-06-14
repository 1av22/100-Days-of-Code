// Day 8
// Fibonaci Using Recursion

#include <iostream>

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n = 8;
    int result = fib(n);
    std::cout << result << std::endl;
}