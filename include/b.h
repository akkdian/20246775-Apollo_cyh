
#ifndef B_H
#define B_H
#include <vector>
using namespace std;
class Solution
{
private:
    // 定义四个方向的偏移量
    int dir[4][2] = {-1, 0, 0, -1, 1, 0, 0, 1};

    // 深度优先搜索（DFS）
    void dfs(vector<vector<char>> &board, int x, int y);

public:
    // 主函数
    void solve(vector<vector<char>> &board);
};
#endif // B_H
