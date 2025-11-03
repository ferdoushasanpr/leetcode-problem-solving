// https://leetcode.com/problems/add-binary/

#include <iostream>

std::string addBinary(std::string a, std::string b)
{
    std::string result;
    int carry = 0;

    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry == 1)
    {
        if (i >= 0)
        {
            carry += a[i] - '0';
            i--;
        }

        if (j >= 0)
        {
            carry += b[j] - '0';
            j--;
        }

        result = std::to_string(carry % 2) + result;
        carry /= 2;
    }
    return result;
}

int main()
{
    std::string a = "1010";
    std::string b = "1011";
    std::string sum = addBinary(a, b);
    std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;
    return 0;
}