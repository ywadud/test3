def removeDuplicates(nums: list[int]) -> int:
    index = 0
    while index < (len(nums) - 1):
        while nums[index] == nums[index + 1]:
            nums.pop(index + 1)

            if (index + 1) >= len(nums):
                break

        index = index + 1
    
    return len(nums)

nums = [1,1]

print(removeDuplicates(nums))
print(nums)