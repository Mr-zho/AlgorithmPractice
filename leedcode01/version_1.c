#include <stdio.h>
#include <time.h>

#define BUFFER_TOTAL 10
#define TARGET 22

/* Note: The returned array must be malloced, assume caller calls free(). */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    for (int idx = 0; idx < numsSize - 1; ++idx) 
    {
        for (int jdx = idx + 1; jdx < numsSize; ++jdx) 
        {
            if (nums[idx] + nums[jdx] == target) 
            {
                int* ret = malloc(sizeof(int) * 2);
                ret[0] = idx, ret[1] = jdx;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main()
{
    /* 随机数种，保证每次随机出来的数组中的数字不一样 */
    srand(time(NULL));
    /* 定义一个存放随机数的数组 */
    int arraryNum[BUFFER_TOTAL];    /* 初始化数组 */
    memset(arraryNum,0, sizeof(arraryNum));


    for(int idx = 0; idx < BUFFER_TOTAL; idx++)
    {
        arraryNum[idx]= rand() % 20;
    }
    //printf("%d\n",arraryNum[idx]);
    int first_num = 0;
    int second_num = 0;

    /* 注意这个地方 不能不减一. 不然会导致同一个位置的元素相加两次 */
    for(int idx = 0; idx < (BUFFER_TOTAL - 1); idx++)
    {
        first_num =arraryNum[idx];
        for (int id = (idx + 1); id < BUFFER_TOTAL; id++)
        {   
            second_num = arraryNum[id];
            if (first_num + second_num == TARGET)
            {
                printf("arrayNum[%d]:%d \narrayNum[%d]:%d\n", idx, first_num, id, second_num) ;
            }
        }
    }
    printf("error\n");

}
