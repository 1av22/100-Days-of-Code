// Day 5
// Reverse String

#include <iostream>
#include <vector>

void printVec(std::vector<char> vec)
{
    for (auto ch : vec)
    {
        std::cout << ch << " ";
    }
    std::cout << std::endl;
}

void reverseString(std::vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        std::swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main()
{
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    std::cout << " String before reversing : " << std::endl;
    printVec(s);
    reverseString(s);
    std::cout << " String after reversing : " << std::endl;
    printVec(s);
}