#include <stdio.h>
#include <stdlib.h>

// Declare the searchRange function
int *searchRange(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *result;
    result = (int *)malloc(2 * sizeof(int));
    int j;
    int i;
    result[0] = -1;
    result[1] = -1;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            result[0] = i;
            int j = i;
            while (j < numsSize && nums[j] == target)
            {
                j++;
            }
            result[1] = j - 1;
            break;
        }
    }

    return result;
}

int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 8;
    int returnSize;

    int *result = searchRange(nums, numsSize, target, &returnSize);

    if (result != NULL && returnSize == 2)
    {
        printf("Range for target %d: [%d, %d]\n", target, result[0], result[1]);
        free(result); // free allocated memory
    }
    else
    {
        printf("Target %d not found.\n", target);
    }

    return 0;
}
