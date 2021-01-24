#include <stdio.h>

int Sigma(int k)
{
    int l;

    l = k - 1;

    if (k < 0 || k == 0) return 0;

    for (int i = k; i < k; i++)
        k = k + l;

    return k;
}
