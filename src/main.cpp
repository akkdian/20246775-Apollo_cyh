#include <iostream>
#include <vector>
#include "b.h"
using namespace std;

int main()
{
    int m, n;

    // 输入矩阵的行数和列数
    cout << "输入矩阵的行数(m): ";
    cin >> m;
    cout << "输入矩阵的列数(n): ";
    cin >> n;

    // 创建一个 m x n 的二维矩阵
    vector<vector<char>> board(m, vector<char>(n));

    // 输入矩阵的每一行
    cout << "按行输入棋盘（每行包含）" << n << "个字符 'X' 或 'O':\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j]; // 输入每个元素
        }
    }
    Solution sol;
    sol.solve(board); // 调用 solve 函数解决问题

    // 输出处理后的矩阵
    cout << "\n处理后的矩阵:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " "; // 输出每个元素
        }
        cout << endl;
    }

    return 0;
}