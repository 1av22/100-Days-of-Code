// Day 9
// Binary Search using Recursion

#include <iostream>

bool binarySearch(int *Arr, int s, int e, int key)
{
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (Arr[mid] == key)
        return true;
    if (Arr[mid] < key)
        return binarySearch(Arr, mid + 1, e, key);
    else
        return binarySearch(Arr, s, mid - 1, key);
}

int main()
{
    int Arr[5] = {4, 6, 8, 12, 15};
    int key = 12;
    std::cout << "Is the key present in arr : " << binarySearch(Arr, 0, 4, key);
}