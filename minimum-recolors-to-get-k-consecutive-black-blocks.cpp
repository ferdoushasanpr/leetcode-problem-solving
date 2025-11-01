// https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08

#include <iostream>

int minimumRecolors(std::string blocks, int k)
{
    int count = 999;
    int start = 0;
    int end = k - 1;

    while (end < blocks.length())
    {
        int temp = 0;
        for (int i = start; i <= end; i++)
        {
            if (blocks.at(i) == 'W')
                temp++;
        }

        if (temp < count)
            count = temp;

        start++;
        end++;
    }

    return count;
}

int main()
{
    std::cout << minimumRecolors("WBWBBBW", 2) << std::endl;
}