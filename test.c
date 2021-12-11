#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int duplicates = 0;
    for (int i = 0; i < (numsSize - 1); i++)
    {
        int j = (i + 1 + duplicates);
        if (j < numsSize)
        {
            for ( ; j < numsSize; j++)
            {
                if (nums[j] == nums[i])
                {
                    duplicates++;
                }
                else
                {
                    break;
                }
            }
            nums[i+1] = nums[j];
        }
        
    }
    int uniqueNums = numsSize - duplicates;
    return uniqueNums;
}

int main()
{
    int nums[] = {1,1,2};
    int expectedNums[] = {1,2};

    int k = removeDuplicates(nums, 3);

    printf("%d", k);
    return 0;
}