#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *result;
    result = (int *)malloc(2 * sizeof(int));
    int i = 0;
    int j = numbersSize - 1;
    while (i < j)
    {
        int sum = numbers[i] + numbers[j];
        if (sum == target)
        {
            result[0] = i + 1;
            result[1] = j + 1;
            return result;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    *returnSize = 0;
    return NULL;
}

int main()
{
    int numbers[] = {2, 7, 11, 15};
    int target = 9;
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
    int returnSize;

    int *result = twoSum(numbers, numbersSize, target, &returnSize);

    if (result != NULL && returnSize == 2)
    {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    }
    else
    {
        printf("No two sum solution found.\n");
    }

    return 0;
}
