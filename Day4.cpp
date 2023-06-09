// Day4
// Find Smallest Letter Greater Than Target

#include <iostream>
#include <vector>
char nextGreatestLetter(std::vector<char> &letters, char target)
{
    for (char ch : letters)
    {
        if (ch > target)
        {
            return ch;
        }
    }
    return letters[0];
}
int main()
{
    std::vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';

    char result = nextGreatestLetter(letters, target);
    std::cout << "Result is  : " << result << std::endl;
}