#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int target = 0;
    scanf("%d",&target);
    int size = 0;
    printf("输入数组大小:");
    scanf("%d", &size);
    
#if 0
    /* 堆上开辟空间 */
    int *array = (int*)malloc(sizeof(int) * size);
#else
    int array[size];
#endif

    int pos = 0;
    srand(time(NULL));
    for(int idx = 0; idx < size ; idx++)
    {
        array[idx] = rand() % 10 + 1;//随机1-10
        printf("%d\t", array[idx]);
    }
    printf("\n");

    for(int idx = 0; idx < size; idx++)
    {
        if(array[idx] != target)
        {
            /* 原地 空间复杂度O(1) */
            #if 1
            /* 优化版本 */
            array[pos++] = array[idx];
            #else
            array[pos] = array[idx];
            pos++;
            #endif
            printf("%d ",array[pos]);
        }
    }
    printf("\n");
    
#if 0
    /* 后置++ : 先判断后赋值 */
    if (pos++)
    /* 前置++ : 先赋值再判断 */
    if (++pos)
#endif
    return 0;
}