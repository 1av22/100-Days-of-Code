// Day 10
// Reversing a string using recusrion

#include <iostream>
#include <string>

std::string reverse(int i, int j, std::string &str)
{
    if (i > j)
        return "";

    std::swap(str[i], str[j]);
    i++;
    j--;
    return reverse(i, j, str);
}

int main()
{
    std::string word = "Aditya";
    reverse(0, word.length() - 1, word);
    std::cout << " The reverse is : " << word << std::endl;
}