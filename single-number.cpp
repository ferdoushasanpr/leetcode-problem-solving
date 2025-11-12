// https://leetcode.com/problems/single-number/

#include <iostream>
#include <vector>

int singleNumber(std::vector<int> &nums)
{
    int result = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        result = result ^ nums[i];
    }

    return result;
}

int main()
{
    std::vector<int> arr = {1};
    std::cout << singleNumber(arr) << std::endl;
}