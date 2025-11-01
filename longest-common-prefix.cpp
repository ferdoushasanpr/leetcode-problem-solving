//https://leetcode.com/problems/longest-common-prefix/

#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> &strs)
{
    if (strs.size() == 1 && strs[0].empty())
        return "";

    if (strs.size() == 1 && (strs[0].at(0) >= 65 && strs[0].at(0) <= 122))
        return strs[0];

    int current = 0;

    while (true)
    {
        int flag = 0;

        int i;
        for (i = 0; i < strs.size() - 1; i++)
        {
            if (strs[i].length() > 0 && current < strs[i].length() && current < strs[i + 1].length() && (strs[i].at(current) == strs[i + 1].at(current)))
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
            break;

        current++;
    }

    if (current > 0)
    {
        return strs[0].substr(0, current);
    }
    else
    {
        return "";
    }
}

int main()
{
    std::vector<std::string> strs{"flower", "flower", "flower"};

    std::cout << longestCommonPrefix(strs) << std::endl;

    return 0;
}