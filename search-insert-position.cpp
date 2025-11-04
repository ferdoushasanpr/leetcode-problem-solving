// https://leetcode.com/problems/search-insert-position/

#include <iostream>
#include <vector>

int searchInsert(std::vector<int> &nums, int target)
{
    int begin = 0, end = nums.size() - 1;

    while (begin <= end)
    {
        int mid = begin + (end - begin) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            begin = mid + 1;
        else
            end = mid - 1;
    }

    return begin;
}

int main()
{
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int index = searchInsert(nums, target);
    std::cout << "Index of target " << target << " is: " << index << std::endl;

    return 0;
}