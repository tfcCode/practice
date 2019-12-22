
//https://leetcode-cn.com/problems/sudoku-solver/
class Solution {

    int n = 3;      // box size
    int N = n * n;  // row size

    int[][] rows = new int[N][N + 1];       //用来记录每一行每个数字出现的个数
    int[][] columns = new int[N][N + 1];    //用来记录每一列每个数字出现的个数
    int[][] boxes = new int[N][N + 1];      //用来记录每一个小九宫格中每个数字出现的个数

    char[][] board;

    boolean sudokuSolved = false;

    public boolean couldPlace(int d, int row, int col) {
        int idx = (row / n) * n + col / n;
        return rows[row][d] + columns[col][d] + boxes[idx][d] == 0;
    }

    public void placeNumber(int d, int row, int col) {
        int idx = (row / n) * n + col / n;

        rows[row][d]++;
        columns[col][d]++;
        boxes[idx][d]++;

        board[row][col] = (char) (d + '0');
    }

    public void placeNextNumber(int row, int col) {
        if ((row + 1 == N) && (col + 1 == N)) {
            sudokuSolved = true;
        } else {
            if (col + 1 == N) {
                traceback(row + 1, 0);
            } else {
                traceback(row, col + 1);
            }
        }
    }

    public void removeNumber(int d, int row, int col) {
        int idx = (row / n) * n + col / n;

        rows[row][d]--;
        columns[col][d]--;
        boxes[idx][d]--;

        board[row][col] = '.';
    }

    public void traceback(int row, int col) {
        if (board[row][col] == '.') {
            for (int d = 1; d < 10; d++) {
                if (couldPlace(d, row, col)) {
                    placeNumber(d, row, col);
                    placeNextNumber(row, col);
                    if (!sudokuSolved) {
                        removeNumber(d, row, col);
                    }
                }
            }
        } else {
            placeNextNumber(row, col);
        }
    }

    public void solveSudoku(char[][] board) {
        this.board = board;

        for (int i = 0; i < N; i++) {        // init rows, columns and boxes
            for (int j = 0; j < N; j++) {
                char num = board[i][j];
                if (num != '.') {
                    int d = Character.getNumericValue(num);
                    placeNumber(d, i, j);
                }
            }
        }
        traceback(0, 0);
    }
}
