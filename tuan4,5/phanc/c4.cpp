#include <iostream>
#include <vector>
using namespace std;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> minefield(m, vector<char>(n));
    vector<vector<int>> result(m, vector<int>(n, 0));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> minefield[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (minefield[i][j] == '.') {
                int count = 0;
                for (int k = 0; k < 8; ++k) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (nx >= 0 && nx < m && ny >= 0 && ny < n && minefield[nx][ny] == '*') {
                        ++count;
                    }
                }
                result[i][j] = count;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (minefield[i][j] == '*') {
                cout << "* ";
            } else {
                cout << result[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
