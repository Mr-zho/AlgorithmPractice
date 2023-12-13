#include <stdio.h>
#include <string.h>

/* 冒泡排序1 */
int main()
{
    int array[] = {4, 1, 7, 3, 2, 5, 11};
    int len = sizeof(array) / sizeof(array[0]);

#if 0
    int tmpdata = 0;
    for (int idx = 0; idx < len; idx++)
    {
        /* 前一个数据和后一个数据相比较 */
        for (int jdx = 0; jdx < len - 1; jdx++)
        {
            if (array[jdx] > array[jdx + 1])
            {
                /* 交换数据 */
                tmpdata = array[jdx];
                array[jdx] = array[jdx + 1];
                array[jdx + 1] = tmpdata;
            }
        }
    }
#endif

#if 0
    int tmpdata = 0;
    for (int idx = 0; idx < len; idx++)
    {
        /* 减少不必要的循环 */
        for (int jdx = 0; jdx < len - idx - 1; jdx++)
        {
            if (array[jdx] > array[jdx + 1])
            {
                /* 交换数据 */
                tmpdata = array[jdx];
                array[jdx] = array[jdx + 1];
                array[jdx + 1] = tmpdata;
            }
        }
    }
#endif


    int minValue = 0; 
    int minIndex = 0;
    int updateFlag = 0;
    int tmpData = 0;
    for (int idx = 0; idx < len; idx++)
    {
        minValue = array[idx];
        updateFlag = 0;
        for (int jdx = idx + 1; jdx < len; jdx++)
        {
            if (array[jdx] < minValue)
            {
                minValue = array[jdx];
                minIndex = jdx;
                updateFlag = 1;
            }
        }
        /* 交换数据 */
        if (updateFlag == 1)
        {
            tmpData = array[idx];
            array[idx] = array[minIndex];
            array[minIndex] = tmpData;
        }
    }

    for (int idx = 0; idx < len; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    return 0;
}