// Day 17
// Letter combinations of phone number

#include <iostream>
#include <string>
#include <vector>

void solve(std::string digits, std::string output, int index, std::vector<std::string> &ans, std::string mapping[])
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    std::string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

std::vector<std::string> letterCombinations(std::string digits)
{
    std::vector<std::string> ans;
    if (digits.length() == 0)
        return ans;
    std::string output = "";
    int index = 0;
    std::string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main()
{
    std::string digits = "23";
    std::vector<std::string> ans = letterCombinations(digits);
    for (auto i : ans)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}