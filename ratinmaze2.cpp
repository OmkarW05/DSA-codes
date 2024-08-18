#include<iostream>
#include<vector>
using namespace std;

bool valid(int i, int j, int n) {
    return i >= 0 && j >= 0 && i < n && j < n;
}

void total(vector<vector<int>>& matrix, vector<vector<bool>>& visit, vector<string>& ans, string path, int i, int j, int n) {
    if (i == n - 1 && j == n - 1) {
        ans.push_back(path);
        return;
    }
    
    int row[] = {1, -1, 0, 0}; // Changed order to DULR (Down, Up, Left, Right)
    int col[] = {0, 0, -1, 1};
    string dir = "DULR";
    visit[i][j] = 1;
    
    for (int k = 0; k < 4; k++) {
        int newRow = i + row[k];
        int newCol = j + col[k];
        if (valid(newRow, newCol, n) && matrix[newRow][newCol] && !visit[newRow][newCol]) {
            path.push_back(dir[k]);
            total(matrix, visit, ans, path, newRow, newCol, n);
            path.pop_back();
        }
    }
    visit[i][j] = 0;
}

int main() {
    vector<vector<int>> matrix(4, vector<int>(4));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }

    int i = 0, j = 0;
    int n = 4;
    vector<vector<bool>> visit(4, vector<bool>(4, 0));
    vector<string> ans;
    string path;
    total(matrix, visit, ans, path, i, j, n);

    for (const auto& p : ans) {
        cout << p << endl;
    }

    return 0;
}

