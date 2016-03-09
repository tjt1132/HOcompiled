#include <stdlib.h>

void sum_abs_( int* data, int* num, int* result)
{
    int i;

    *result = 0;

    for (i = 0; i < *num; i++)
    {
        *result = *result + abs(*(data + i));
    }
}
