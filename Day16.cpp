// Day 16
// Subsequence of string

#include <iostream>
#include <vector>

void solve(std::string s, std::string output, int idx, std::vector<std::string> &ans)
{
    // Base case
    if (idx >= s.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(s, output, idx + 1, ans);

    // include
    int element = s[idx];
    output.push_back(element);
    solve(s, output, idx + 1, ans);
}

std::vector<std::string> subsequence(std::string s)
{
    std::vector<std::string> ans;
    std::string output = "";
    int idx = 0;
    solve(s, output, idx, ans);
    return ans;
}

int main()
{
    std::string s = "abc";
    std::vector<std::string> ans = subsequence(s);
    for (auto i : ans)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}