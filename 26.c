#include<stdio.h>

int removeDuplicates(int *nums, int numsSize) {
    for()
}
/* O(n^2)
int removeDuplicates(int* nums, int numsSize){
    int i = 0, j = 0;
    for(i = 0; i < numsSize - 1; i++) {
        if(nums[i] == nums[i + 1]) {
            for(j = i + 1; j < numsSize - 1; j++) {
                nums[j] = nums[j + 1];
            }
            numsSize--;
            i--;
        }
    }
    return numsSize;
}
*/
int main(void)
{
    int nums[3] = {1, 1, 2};
    int retNum = 0;
    retNum = removeDuplicates(nums, sizeof(nums)/sizeof(int));
    for(int i = 0; i < retNum; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}