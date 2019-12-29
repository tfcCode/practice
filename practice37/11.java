
//https://leetcode-cn.com/problems/spiral-matrix/

import java.util.*;

class Solution {
    public static void main(String[] args) {
        Solution x = new Solution();
        int[][] pt = new int[][]{
                {1, 2, 3, 10, 21},
                {4, 5, 6, 11, 22},
                {7, 8, 9, 12, 23}
        };
        System.out.print(x.spiralOrder(pt));
    }

    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> res = new LinkedList<>();
        if (matrix.length == 0) {
            return res;
        }
        int row = matrix.length;
        int col = matrix[0].length;
        int sum = row * col;
        int n = 0;


        int up = 0;
        int down = row;
        int left = 0;
        int right = col;
        boolean[][] judge = new boolean[row][col];

        while (n < sum) {
            for (int i = left; left < right && i < right; i++) {
                if (judge[left][i] == false) {
                    res.add(matrix[left][i]);
                    judge[left][i] = true;
                    n++;
                }
            }
            right--;

            for (int i = up + 1; up < down && i < down; i++) {
                if (judge[i][right] == false) {
                    res.add(matrix[i][right]);
                    judge[i][right] = true;
                    n++;
                }
            }
            down--;

            for (int i = right - 1; left < right && i >= left; i--) {
                if (judge[down][i] == false) {
                    res.add(matrix[down][i]);
                    judge[down][i] = true;
                    n++;
                }
            }
            left++;

            for (int i = down - 1; up < down && i > up; i--) {
                if (judge[i][left - 1] == false) {
                    res.add(matrix[i][left - 1]);
                    judge[i][left - 1] = true;
                    n++;
                }
            }
            up++;
        }
        return res;
    }
}