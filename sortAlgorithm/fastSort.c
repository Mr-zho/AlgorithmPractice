#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define BUFFER_SIZE 10


void quickSort(int *nums, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int idx = left, jdx = right;
    int pivot = nums[idx];
    while (idx < jdx)
    {
        while (idx < jdx && nums[jdx] >= pivot)
        {
            jdx--;
        }   // 跳出循环的条件是:idx = jdx || pivot < nums[jdx].
        
        if (idx < jdx)
        {
            nums[idx] = nums[jdx];      // 填左边的坑之后, nums[jdx]成了右边新的坑位.
            idx++;                      // 位置后移
        }

        while (idx < jdx && nums[idx] < pivot)
        {
            idx++;
        }

        if (idx < jdx)
        {
            nums[jdx] = nums[idx];      // 填右边的坑之后, nums[idx]成了左边新的坑位.
            jdx--;                      // 位置前移
        }
    }
    nums[idx] = pivot;
    quickSort(nums, left, idx - 1);
    quickSort(nums, idx + 1, right);
}

int main()
{
    srand(time(NULL));    

    int array[BUFFER_SIZE] = {54, 4, 9, 35, 84, 76, 3, 72, 65, 81};
    
#if 1
    quickSort(array, 0, sizeof(array) / sizeof(array[0]) - 1);
#endif

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\n", array[idx]);
    }
    return 0;
}