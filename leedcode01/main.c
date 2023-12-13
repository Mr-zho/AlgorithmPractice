#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <string.h>

#define RANDOM_NUM 22
#define BUFFER_SIZE 5

int main()
{
    int randnum[BUFFER_SIZE];
    memset(randnum, 0, sizeof(int) * BUFFER_SIZE);

    int randSc1 = 100;
    int randSc2 = 100;

    srand(time(NULL));
    while (randSc1 == 100 || randSc2 == 100)
    {
        for(int idx = 0; idx < 5; idx++)
        {
            int ran;
            do
            {
                ran = rand() % RANDOM_NUM + 1;
            } while (ran == 11);
            randnum[idx] = ran;
        }
        for(int idx =0; idx < 4; idx++)
        {
            for(int jdx = idx + 1; jdx < 5; jdx++)
            {
                if(randnum[idx]+randnum[jdx] == 22)
                {
                    randSc1 = idx;
                    randSc2 = jdx;
                    break;
                }

            }
        }
        if (randSc1 !=100 && randSc2 !=100)
        {
            for(int idx=0;idx<5;idx++)
            {
                printf("打印随机数组%d", randnum[idx]);
            }
        }
    
        printf("数组中第%d个数和%d个数加起来等于22",randSc1,randSc2);
    }
}