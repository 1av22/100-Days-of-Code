// Day 7
// Plus One

#include <iostream>
#include <vector>
#include <algorithm>

void printVec(std::vector<int> vec)
{
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

std::vector<int> plusOne(std::vector<int> &digits)
{
    std::vector<int> answer;
    int carry = 0;
    digits[digits.size() - 1] += 1;
    for (int i = (digits.size() - 1); i >= 0; i--)
    {
        int base = (carry + digits[i]) % 10;
        answer.push_back(base);
        carry = (carry + digits[i]) / 10;
    }
    if (carry > 0)
        answer.push_back(carry);
    std::reverse(answer.begin(), answer.end());
    return answer;
}

int main()
{
    std::vector<int> digits = {4, 3, 2, 1};
    std::vector<int> answer = plusOne(digits);
    printVec(answer);
}