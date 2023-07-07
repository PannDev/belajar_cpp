#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Cell {
    int row;
    int col;
    int distance;
};

int BFS(vector<vector<char> >& maze, int startRow, int startCol, int targetRow, int targetCol) {
    int numRows = maze.size();
    int numCols = maze[0].size();

    vector<vector<bool> > visited(numRows, vector<bool>(numCols, false));

    // Gerakan atas, kanan, bawah, kiri
    int dRow[] = {-1, 0, 1, 0};
    int dCol[] = {0, 1, 0, -1};

    queue<Cell> q;
    q.push({startRow, startCol, 0});
    visited[startRow][startCol] = true;

    while (!q.empty()) {
        Cell current = q.front();
        q.pop();

        if (current.row == targetRow && current.col == targetCol) {
            return current.distance;
        }

        for (int i = 0; i < 4; i++) {
            int newRow = current.row + dRow[i];
            int newCol = current.col + dCol[i];

            if (newRow >= 0 && newRow < numRows && newCol >= 0 && newCol < numCols &&
                maze[newRow][newCol] != '#' && !visited[newRow][newCol]) {
                q.push({newRow, newCol, current.distance + 1});
                visited[newRow][newCol] = true;
            }
        }
    }

    return -1; // Tidak dapat menemukan tuan putri
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char> > maze(N, vector<char>(M));

    int startRow, startCol, targetRow, targetCol;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];

            if (maze[i][j] == 'B') {
                startRow = i;
                startCol = j;
            } else if (maze[i][j] == 'P') {
                targetRow = i;
                targetCol = j;
            }
        }
    }

    int minSteps = BFS(maze, startRow, startCol, targetRow, targetCol);
    cout << minSteps << endl;

    return 0;
}
