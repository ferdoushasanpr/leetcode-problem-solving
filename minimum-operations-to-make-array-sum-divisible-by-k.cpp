// https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/

#include <iostream>
#include <vector>

int minOperations(std::vector<int> &nums, int k)
{
    int total = 0;
    int operations = 0;
    int j = 0;

    while (j < nums.size())
    {
        total = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            total += nums[i];
        }

        if (total % k == 0)
        {
            break;
        }
        else if (nums[j] > 0)
        {
            nums[j]--;
            operations++;
        }
        else
        {
            j++;
        }
    }

    return operations;
}

int main()
{
    int k = 5;
    std::vector<int> nums = {2, 2, 3, 4, 5};
    int result = minOperations(nums, k);
    std::cout << result << std::endl;
    return 0;
}