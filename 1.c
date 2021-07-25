#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *retArr, i = 0, j = 0;
    retArr = (int *)malloc(*returnSize * sizeof(int));
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *retArr = nums[i];
                *(retArr + 1) = nums[j];
                return retArr;
            }
        }
    }
}

int main(void)
{
    int tmpNums[] = {2, 7, 1, 15};
    int tmpTarget = 9;
    int returnSize = 2;
    int *ptr = NULL;
    ptr = twoSum(tmpNums, sizeof(tmpNums), tmpTarget, &returnSize);
    printf("%d %d", *ptr, *(ptr + 1));
}
