// Day 6
// Summary Ranges

#include <iostream>
#include <vector>
#include <string>

void printVec(std::vector<std::string> vec)
{
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
void printVec(std::vector<int> vec)
{
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

std::vector<std::string> summaryRanges(std::vector<int> &nums)
{
    std::vector<std::string> answer;
    if (nums.size() == 1)
    {
        answer.push_back(std::to_string(nums[0]));
        return answer;
    }
    else if (nums.size() == 2)
    {
        if (nums[0] + 1 == nums[1])
        {
            answer.push_back(std::to_string(nums[0]) + "->" + std::to_string(nums[1]));
            return answer;
        }
        else
        {
            answer.push_back(std::to_string(nums[0]));
            answer.push_back(std::to_string(nums[1]));
            return answer;
        }
    }
    int counter = 0;
    while (counter < nums.size())
    {
        std::string start = "", end = "";
        start = std::to_string(nums[counter]);
        int i = counter;
        while (i < nums.size() - 1 && (nums[i] + 1) == nums[i + 1])
        {
            end = std::to_string(nums[i + 1]);
            i++;
        }
        if (end == "")
        {
            answer.push_back(start);
        }
        else
        {
            answer.push_back((start + "->" + end));
        }
        counter = i + 1;
    }
    return answer;
}

int main()
{
    std::vector<int> nums = {0, 1, 2, 4};
    printVec(nums);
    std::vector<std::string> ans = summaryRanges(nums);
    printVec(ans);
}