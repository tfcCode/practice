

//https://leetcode-cn.com/problems/valid-sudoku/
class Solution {
    public static void main(String[] args) {
        char[][] board = new char[][]{
                {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
        };
        System.out.println(isValidSudoku(board));
    }

    public static boolean isValidSudoku(char[][] board) {
        for (int i = 0; i < 9; i++) {
            if (judge_row(board, i) == false) {
                System.out.println(i);
            }
            if (judge_col(board, i) == false) {
                System.out.println(i);
            }
        }
        for (int i = 0; i < 9; i = i + 3) {
            for (int j = 0; j < 9; j = j + 3) {
                if (judge_lattice(board, i, j) == false) {
                    System.out.println(i + " " + j);
                }
            }
        }
        return true;
    }

    public static boolean judge_row(char[][] board, int n) {
        boolean[] row = new boolean[10];
        for (int i = 0; i < 9; i++) {
            if (board[n][i] == '.') {
                continue;
            }
            int x = board[n][i] - '0';
            if (row[x] == false) {
                row[x] = true;
            } else {
                return false;
            }
        }
        return true;
    }

    public static boolean judge_col(char[][] board, int n) {
        boolean[] col = new boolean[10];
        for (int i = 0; i < 9; i++) {
            if (board[i][n] == '.') {
                continue;
            }
            int x = board[i][n] - '0';
            if (col[x] == false) {
                col[x] = true;
            } else {
                return false;
            }
        }
        return true;
    }

    public static boolean judge_lattice(char[][] board, int row, int col) {
        boolean[] lattice = new boolean[10];
        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                int x = board[i][j] - '0';
                if (lattice[x] == false) {
                    lattice[x] = true;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
}