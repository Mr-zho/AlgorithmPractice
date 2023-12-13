#include <stdio.h>

/* 去除有序数组 重复元素*/
int removeRepeatElement(int *nums, int numLen)
{
    int prevIdx = 1; 
    int currentIdx = 1;
    for (;currentIdx < numLen;)
    {
        if (nums[currentIdx] != nums[currentIdx - 1])
        {
            nums[prevIdx] = nums[currentIdx];
            prevIdx++;
        }
        currentIdx++;
    }
    printf("prevIdx:%d\n", prevIdx);
    return prevIdx;
}

int main()
{
    int nums[] = {1, 1, 2, 3, 3, 4, 5, 5, 5, 5, 6};
    int len = sizeof(nums) / sizeof(nums[0]);
    printf("len:%d\n", len);
    int newLen = removeRepeatElement(nums, len);

    for (int idx = 0; idx < newLen; idx++)
    {
        printf("nums[%d] = %d\n", idx, nums[idx]);
    }
    return 0;
}