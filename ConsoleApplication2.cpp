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

void initializeBoard(vector<vector<int>>& board) {
    int row, col, value;
    char continueInput = 'y';

    while (continueInput == 'y') {
        cout << "Введите строку, столбец и значение (1-9): ";
        cin >> row >> col >> value;

        if (row >= 1 && row <= SIZE && col >= 1 && col <= SIZE && value >= 1 && value <= 9) {
            board[row - 1][col - 1] = value;
        }
        else {
            cout << "Некорректный ввод. Попробуйте снова." << endl;
        }

        cout << "Хотите продолжить ввод? (y/n): ";
        cin >> continueInput;
    }
}

int main() {
    vector<vector<int>> board(SIZE, vector<int>(SIZE, 0));

    initializeBoard(board);

    cout << "Поле Судоку с начальными значениями:" << endl;
    printBoard(board);

    return 0;
}