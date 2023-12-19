#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

void bubbleSort(int *array, int numSize)
{
    for (int idx = 0; idx < numSize; idx++)
    {
        /* 减一: 是因为每次遍历之后 最大值就已经放到了最后的位置, 就不需要再比较后面的数据了. */
        for (int jdx = 1; jdx < numSize - idx; jdx++)
        {
            /* 升序排序 */
            if (array[jdx - 1] > array[jdx])
            {
                int tmp = array[jdx - 1];
                array[jdx - 1] = array[jdx];
                array[jdx] = tmp;
            }
        }
    }
}

int main()
{  
    int array[BUFFER_SIZE] = {54, 4, 9, 35, 84, 76, 3, 72, 65, 81};
#if 1
    bubbleSort(array, BUFFER_SIZE);
#endif

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\n", array[idx]);
    }
    return 0;
}