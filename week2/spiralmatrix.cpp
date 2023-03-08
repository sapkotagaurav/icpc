#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    vector<int> a;
    while (top <= bottom and left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            a.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            a.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i > left - 1; i--)
            {
                a.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i > top - 1; i--)
            {
                a.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return a;
}

int main()
{
}