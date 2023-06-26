// Day 19
// Rat in a maze

#include <iostream>
#include <vector>
#include <algorithm>

bool isSafe(int x, int y, int n, std::vector<std::vector<int>> visited, std::vector<std::vector<int>> &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        return true;
    else
        return false;
}

void solve(std::vector<std::vector<int>> &m, int n, std::vector<std::string> &ans, int x, int y, std::vector<std::vector<int>> visited, std::string path)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;

    // down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    // left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    // right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    // up
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    visited[x][y] = 0;
}

std::vector<std::string> findPath(std::vector<std::vector<int>> &m, int n)
{
    std::vector<std::string> ans;
    int srcx = 0;
    int srcy = 0;

    std::vector<std::vector<int>> visited = m;
    for (int i = 0; i < visited.size(); i++)
    {
        for (int j = 0; j < visited[i].size(); j++)
        {
            visited[i][j] = 0;
        }
    }

    std::string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    std::sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    std::vector<std::vector<int>> m = {{1, 0, 0, 0},
                                       {1, 1, 0, 1},
                                       {1, 1, 0, 0},
                                       {0, 1, 1, 1}};
    int N = 4;
    std::vector<std::string> ans = findPath(m, N);
    for (auto s : ans)
    {
        std::cout << s << std::endl;
    }
}