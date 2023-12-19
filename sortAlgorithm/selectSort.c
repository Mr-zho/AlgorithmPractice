#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

int main()
{
    srand(time(NULL));    

    int array[BUFFER_SIZE] = {54, 4, 9, 35, 84, 76, 3, 72, 65, 81};

    /* 选择排序 */
    int minIndex = 0;
    int flag = 0;
    for (int idx = 0; idx < BUFFER_SIZE - 1; idx++)
    {   
        minIndex = idx;
        for (int jdx = idx + 1; jdx < BUFFER_SIZE; jdx++)
        {
            if (array[jdx] < array[idx])
            {
                minIndex = jdx;
                flag = 1;
            }
        }
        if (flag)
        {
            int swap = array[minIndex];
            array[minIndex] = array[idx];
            array[idx] = swap;
        }

    }

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\n", array[idx]);
    }
    return 0;
}