

//https://leetcode-cn.com/problems/n-queens-ii/

import java.util.*;

class Solution {
    int rows[];
    int hills[];
    int dales[];
    int n;

    int sum = 0;

    int queens[];  //queens[i] 的值表示第 i 行的皇后在第 queens[i] 列

    List<List<String>> output = new ArrayList();

    public static void main(String[] args) {
        Solution x = new Solution();
        System.out.println(x.totalNQueens(4));
    }

    /**
     * rows[col]：表示第 col 列是否有元素（值为 1 则有，值为 0 则无）
     * dales[row + col]：表示主对角线上是否有元素
     * hills[row - col + n * 2]：表示非主对角线上是否有元素（加上 2*n 是因为 row-col 可能为负数）
     */
    public boolean isPlaceQueen(int row, int col) {
        int res = rows[col] + dales[row + col] + hills[row - col + n * 2];
        return (res == 0) ? true : false;
    }

    public void placeQueen(int row, int col) {
        queens[row] = col;
        rows[col] = 1;
        dales[row + col] = 1;
        hills[row - col + n * 2] = 1;
    }

    public void removeQueen(int row, int col) {
        queens[row] = 0;
        rows[col] = 0;
        dales[row + col] = 0;
        hills[row - col + n * 2] = 0;
    }

    public void backtrace(int row) {
        for (int col = 0; col < n; col++) {
            if (isPlaceQueen(row, col)) {
                placeQueen(row, col);
                if (row + 1 == n) {
                    sum++;
                } else {
                    backtrace(row + 1);
                }
                removeQueen(row, col);
            }
        }
    }

    public int totalNQueens(int n) {
        this.n = n;
        rows = new int[n];
        hills = new int[4 * n - 1];
        dales = new int[2 * n - 1];
        queens = new int[n];
        backtrace(0);
        return sum;
    }
}
