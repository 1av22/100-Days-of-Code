// Day 15
// Finding the power set of an array

#include <iostream>
#include <vector>

void solve(std::vector<int> nums, std::vector<int> output, int index, std::vector<std::vector<int>> &answer)
{
    // Base case
    if (index >= nums.size())
    {
        answer.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, answer);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, answer);
}

std::vector<std::vector<int>> subsets(std::vector<int> &nums)
{
    std::vector<std::vector<int>> answer;
    std::vector<int> output;
    int index = 0;
    solve(nums, output, index, answer);
    return answer;
}

int main()
{
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> ans = subsets(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        int s = ans[i].size();
        for (int j = 0; j < s; j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout << std::endl;
    }
}