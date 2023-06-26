// Day 18
// Permutation of integers
#include <iostream>
#include <vector>

void solve(std::vector<int> nums, std::vector<std::vector<int>> &ans, int index)
{
    // Base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    // recursive call
    for (int j = index; j < nums.size(); j++)
    {
        std::swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        // Bactracking
        std::swap(nums[index], nums[j]);
    }
}
std::vector<std::vector<int>> permutations(std::vector<int> &nums)
{
    std::vector<std::vector<int>> ans;
    int index = 0;

    solve(nums, ans, index);
    return ans;
}

int main()
{
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> ans = permutations(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout << std::endl;
    }
}