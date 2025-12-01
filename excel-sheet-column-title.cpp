// https://leetcode.com/problems/excel-sheet-column-title/

#include <iostream>

std::string convertToTitle(int columnNumber)
{
    std::string str = "";
    int result = (columnNumber - 1) / 26;
    int remainder = (columnNumber - 1) % 26;

    if (result == 0)
    {
        return char(remainder + 'A') + str;
    }

    str = convertToTitle(result) + char(remainder + 'A') + str;
    return str;
}

int main()
{
    int columnNumber = 701;
    std::string title = convertToTitle(columnNumber);
    std::cout << title << std::endl;
    return 0;
}