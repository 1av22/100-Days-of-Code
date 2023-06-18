// Day 13
// Merge 2 sorted arrays

#include <iostream>
#include <vector>

void printVec(std::vector<int> vec)
{
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void mergeSortedArrays(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
{

    std::vector<int> arr;
    int idx1 = 0;
    int idx2 = 0;

    int k = 0;
    while (idx1 < m && idx2 < n)
    {
        if (nums1[idx1] < nums2[idx2])
        {
            arr.push_back(nums1[idx1++]);
        }
        else
        {
            arr.push_back(nums2[idx2++]);
        }
    }

    while (idx1 < m)
    {
        arr.push_back(nums1[idx1++]);
    }
    while (idx2 < n)
    {
        arr.push_back(nums2[idx2++]);
    }

    nums1 = arr;
}

int main()
{
    std::vector<int> nums1 = {2, 4, 6};
    std::vector<int> nums2 = {1, 3, 5, 7};
    int m = 3, n = 4;
    mergeSortedArrays(nums1, m, nums2, n);
    printVec(nums1);
    printVec(nums2);
}