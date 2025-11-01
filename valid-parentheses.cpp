// https://leetcode.com/problems/valid-parentheses/description/

#include <iostream>
#include <vector>

bool isValidBrackets(std::string str)
{
    std::vector<char> bracket;

    int flag = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (bracket.size() == 0 && (str.at(i) == ')' || str.at(i) == '}' || str.at(i) == ']'))
        {
            flag = 0;
            break;
        }

        if (str.at(i) == '(' || str.at(i) == '{' || str.at(i) == '[')
        {
            bracket.push_back(str.at(i));
        }
        else if (str.at(i) == ')' || str.at(i) == '}' || str.at(i) == ']')
        {
            if ((str.at(i) == ')' && bracket.at(bracket.size() - 1) == '(') || (str.at(i) == '}' && bracket.at(bracket.size() - 1) == '{') || (str.at(i) == ']' && bracket.at(bracket.size() - 1) == '['))
            {
                bracket.pop_back();
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if (bracket.size() == 0 && flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::cout << isValidBrackets("([])") << std::endl;
}