// Palindrome Number
#include <iostream>
#include <string>

bool isPalin(int x)
{
    std::string num = std::to_string(x);
    int s = 0, e = num.length() - 1;
    while (s <= e)
    {
        if (num[s] != num[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    int x = -121;
    std::cout << isPalin(x);
}