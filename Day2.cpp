// Remove Elements

#include <iostream>
#include <vector>
int removeElement(std::vector<int> &nums, int val)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[j++] = nums[i];
        }
    }
    return j;
}
int main()
{
    std::vector nums = {3, 2, 2, 3};
    int val = 3;
    int answer = removeElement(nums, val);
    std::cout << answer << std::endl;
}