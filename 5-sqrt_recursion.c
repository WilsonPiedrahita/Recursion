#include "main.h"
#include <stdio.h>
#include <math.h>

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;

    return sqrt_helper(n, 1, n);
}


int sqrt_helper(int n, int start, int end)
{
    int mid;

    if (start <= end)
    {
        mid = (start + end) / 2;

        if (mid * mid == n)
            return mid;
        if (mid * mid > n)
            return sqrt_helper(n, start, mid - 1);

        return sqrt_helper(n, mid + 1, end);
    }

    return end;
}