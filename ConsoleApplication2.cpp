#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 9;

void printBoard(const vector<vector<int>>& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> board(SIZE, vector<int>(SIZE, 0));

    cout << "Пустое поле Судоку:" << endl;
    printBoard(board);

    return 0;
}
