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

void initializeSums(vector<vector<int>>& sums) {
    int blockRow, blockCol, sum;
    char continueInput = 'y';

    while (continueInput == 'y') {
        cout << "Введите номер блока (строка и столбец от 1 до 3) и сумму: ";
        cin >> blockRow >> blockCol >> sum;

        if (blockRow >= 1 && blockRow <= 3 && blockCol >= 1 && blockCol <= 3) {
            sums[blockRow - 1][blockCol - 1] = sum;
        }
        else {
            cout << "Некорректный ввод. Попробуйте снова." << endl;
        }

        cout << "Хотите продолжить ввод? (y/n): ";
        cin >> continueInput;
    }
}

int main() {
    vector<vector<int>> board(SIZE, vector<int>(SIZE, 0)); // двумерный вектор (где он хранит матрицу 9 на 9 заполненую 0)
    vector<vector<int>> sums(3, vector<int>(3, 0)); // sums хранит суммы

    initializeBoard(board);
    initializeSums(sums);

    cout << "Поле Судоку с начальными значениями:" << endl;
    printBoard(board);

    cout << "Суммы для блоков:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << sums[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
