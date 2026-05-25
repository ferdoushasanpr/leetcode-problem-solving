//https://leetcode.com/problems/fizz-buzz/

#include<iostream>
#include<vector>


class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
         std::vector<std::string> a;
    for(int i=0; i<n; i++){
        if((i+1) % 3 == 0 && (i+1) % 5 == 0) {
            a.push_back("FizzBuzz");
        } else if((i+1) % 3 == 0) {
            a.push_back("Fizz");
        } else if((i+1) % 5 == 0) {
            a.push_back("Buzz");
        } else {
            a.push_back(std::to_string(i + 1));
        }
    }
    
    return a;
    }
};