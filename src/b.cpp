#include <iostream>
#include "b.h"

using namespace std;

void Solution::dfs(vector<vector<char>> &board, int x, int y)
{
    board[x][y] = 'A';
    for (int i = 0; i < 4; i++)
    { // 向四个方向遍历
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        // 超过边界
        if (nextx < 0 || nextx >= board.size() || nexty < 0 || nexty >= board[0].size())
            continue;
        // 不符合条件，不继续遍历
        if (board[nextx][nexty] == 'X' || board[nextx][nexty] == 'A')
            continue;
        dfs(board, nextx, nexty);
    }
    return;
}

void Solution::solve(vector<vector<char>> &board)
{
    int n = board.size(), m = board[0].size();
    // 步骤一：
    // 从左侧边，和右侧边 向中间遍历
    for (int i = 0; i < n; i++)
    {
        if (board[i][0] == 'O')
            dfs(board, i, 0);
        if (board[i][m - 1] == 'O')
            dfs(board, i, m - 1);
    }

    // 从上边和下边 向中间遍历
    for (int j = 0; j < m; j++)
    {
        if (board[0][j] == 'O')
            dfs(board, 0, j);
        if (board[n - 1][j] == 'O')
            dfs(board, n - 1, j);
    }
    // 步骤二：
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 'O')
                board[i][j] = 'X';
            if (board[i][j] == 'A')
                board[i][j] = 'O';
        }
    }
}

/*作者：代码随想录
链接：https://leetcode.cn/problems/surrounded-regions/solutions/1793681/by-carlsun-2-u5ry/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/