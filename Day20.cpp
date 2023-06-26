// Day 20
// Find the Winner of the Circular Game

#include <iostream>
#include <vector>

void solve(std::vector<int> &v, int k, int &ans, int index)
{
    if (v.size() == 1)
    {
        ans = v[0];
        return;
    }
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    solve(v, k, ans, index);
}
int findTheWinner(int n, int k)
{
    std::vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i + 1);
    }
    int ans = 0;
    solve(v, k - 1, ans, 0);
    return ans;
}

int main()
{
    int n = 5, k = 2;
    int ans = findTheWinner(n, k);
    std::cout << ans << std::endl;
}