// Day 12
// Bubble Sort using recursion

#include <iostream>

void bubbleSort(int *arr, int n)
{
    if (n == 1 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            std::swap(arr[i], arr[i + 1]);
    }

    bubbleSort(arr, n - 1);
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    std::cout << " Before Sorting" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    bubbleSort(arr, 5);
    std::cout << " After Sorting" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}