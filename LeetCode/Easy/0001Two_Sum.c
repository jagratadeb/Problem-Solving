#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *result = (int *)malloc(*returnSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        int complement = target - nums[i];

        for (int j = 0; j < i; j++)
        {
            if (nums[j] == complement)
            {
                result[0] = j;
                result[1] = i;
                return result;
            }
        }
    }
    *returnSize = 0;
    free(result);
    return NULL;
}

int main()
{
    // Example array and target
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    // Call the twoSum function
    int *result = twoSum(nums, numsSize, target, &returnSize);

    // Check and print the result
    if (result != NULL && returnSize == 2)
    {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result); // Don't forget to free the allocated memory
    }
    else
    {
        printf("No two sum solution found.\n");
    }

    return 0;
}
