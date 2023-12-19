#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

int main()
{
    srand(time(NULL));    

    int array[BUFFER_SIZE] = {54, 4, 9, 35, 84, 76, 3, 72, 65, 81};

    // for (int idx = 0; idx < BUFFER_SIZE; idx++)
    // {
    //     array[idx] = rand() % 100 + 1;
    // }
    
    // for (int idx = 0; idx < BUFFER_SIZE; idx++)
    // {
    //     printf("%d\n", array[idx]);
    // }
    // printf("\n");


   
#if 0
    /* 插入排序 */
    int current = 0;
    int prevIndex = 0;
    for (int idx = 1; idx < BUFFER_SIZE; idx++)
    {   
        /* 当前遍历到的索引 */
        current = array[idx];
        prevIndex = idx - 1;
        while ((current < array[prevIndex]) && prevIndex >= 0)
        {
            array[prevIndex + 1] = array[prevIndex];
            /* 前面的索引-- */
            prevIndex--;
        } // array[prevIndex] <= array[currentIndex] || prevIndex < 0
        array[prevIndex + 1] = current;
    }
#else
    int currentVal = 0;
    int prevIndex = 0;
    for (int idx = 1; idx < BUFFER_SIZE; idx++)
    {   
        /* 当前遍历到的索引的值 */
        currentVal = array[idx];
        prevIndex = idx - 1;
        while ((currentVal < array[prevIndex]) && prevIndex >= 0)
        {
            array[prevIndex + 1] = array[prevIndex];
            /* 前面的索引-- */
            prevIndex--;
        } // array[prevIndex] <= array[currentIndex] || prevIndex < 0
        array[prevIndex + 1] = currentVal;
    }

#endif

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\n", array[idx]);
    }
    return 0;
}