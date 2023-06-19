// Day 14
// Quick Sort using recusrion

#include <iostream>

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex = s + count;
    std::swap(arr[pivotIndex], arr[s]);

    int left = s, right = e;
    while (s < pivotIndex && right > pivotIndex)
    {
        while (arr[left] < pivot)
            left++;
        while (arr[right] > pivot)
            right--;
        if (left < pivotIndex && right > pivotIndex)
            std::swap(arr[left++], arr[right--]);
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p);
    quickSort(arr, p + 1, e);
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
    quickSort(arr, 0, 5);
    std::cout << " After Sorting" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}