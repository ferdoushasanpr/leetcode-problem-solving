// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

#include <iostream>

int strStr(std::string haystack, std::string needle)
{
    int needleLength = needle.length();
    int haystackLength = haystack.length();

    int foundIndex = -1;

    for (int i = 0; i < (haystackLength - needleLength) + 1; i++)
    {
        bool flag = true;

        for (int j = 0; j < needleLength; j++)
        {
            if (needle[j] != haystack[i + j])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            foundIndex = i;
            break;
        }
    }

    return foundIndex;
}

int main()
{
    std::string haystack = "hellosasadbutsad";
    std::string needle = "sad";

    std::cout << "Index of first occurrence: " << strStr(haystack, needle) << std::endl;
}